#pragma  once
#include <iostream>

template <class data> class clsDoublyLinkedList
{
    private:
    data                 _value;
    clsDoublyLinkedList *_next;
    clsDoublyLinkedList *_prev;
    int                  _size;

    public:
    clsDoublyLinkedList *head;



    private:
    data getValue(void)
    {
        return (_value);
    }

    clsDoublyLinkedList *getNext(void)
    {
        return (_next);
    }

    clsDoublyLinkedList *getPrev(void)
    {
        return (_prev);
    }

    void setValue(data value)
    {
        _value = value;
    }

    void setNext(clsDoublyLinkedList *adress)
    {
        _next = adress;
    }

    void setPrev(clsDoublyLinkedList *adress)
    {
        _prev = adress;
    }

    void _printNodeDetails(clsDoublyLinkedList* head)
    {
        if (head->getPrev() != NULL)
            std::cout << head->getPrev()->getValue();
        else
            std::cout << "NULL";

        std::cout << " <--> " << head->getValue() << " <--> ";

        if (head->getNext() != NULL)
            std::cout << head->getNext()->getValue() << "\n";
        else
            std::cout << "NULL";

    }

    void _printListDetails(clsDoublyLinkedList* head)
    {
        std::cout << "\n\n";
        while (head != NULL) {
            _printNodeDetails(head);
            head = head->getNext();
        }
    }

    public:
    clsDoublyLinkedList(void)
    {
        _next = NULL;
        _prev = NULL;
        head  = NULL;
        _size = 0;
    }

    void insertAtBeginning(data value) 
    {
        clsDoublyLinkedList *new_node = new clsDoublyLinkedList();

        if (head != NULL)
            head->setPrev(new_node);

        new_node->setValue(value);
        new_node->setNext(head);
        new_node->setPrev(NULL);

        head = new_node;
        _size++;
    }

    void insertAfter(clsDoublyLinkedList* prev_node, data value)
    {
        if (prev_node == NULL)
        {
            std::cout << "the given previous node cannot be NULL";
            return;
        }

        clsDoublyLinkedList* new_node = new clsDoublyLinkedList();

        new_node->setValue(value);
        new_node->setNext(prev_node->getNext());
        new_node->setPrev(prev_node);

        if (prev_node->getNext() != NULL)
            prev_node->getNext()->setPrev(new_node);

        prev_node->setNext(new_node);
        _size++;
    }

    void insertAtEnd(data value)
    {
        clsDoublyLinkedList* newNode = new clsDoublyLinkedList();

        newNode->setValue(value);
        newNode->setNext(NULL);

        if (head == NULL)
        {
            newNode->setPrev(NULL);
            head = newNode;
        }
        else
        {
            clsDoublyLinkedList* current = head;

            while (current->getNext() != NULL)
            {
                current = current->getNext();
            }

            current->setNext(newNode);
            newNode->setPrev(current);
        }
        _size++;
    }

    void deleteNode(clsDoublyLinkedList* &NodeToDelete)
    {
        if (head == NULL || NodeToDelete == NULL)
            return;

        if (head == NodeToDelete)
            head = NodeToDelete->getNext();

        if (NodeToDelete->getNext() != NULL)
            NodeToDelete->getNext()->setPrev(NodeToDelete->getPrev());

        if (NodeToDelete->getPrev() != NULL)
            NodeToDelete->getPrev()->setNext(NodeToDelete->getNext());

        delete NodeToDelete;
        _size--;
    }

    void deleteFirstNode(void)
    {
        if (head == NULL)
            return;

        clsDoublyLinkedList* temp = head;
        head = head->getNext();
    
        if (head != NULL)
            head->setPrev(NULL);

        delete temp;
        _size--;
    }

    void deleteLastNode(void)
    {
        if (head == NULL)
            return;

        if (head->getNext() == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        clsDoublyLinkedList *current = head;
        while (current->getNext()->getNext() != NULL)
        {
            current = current->getNext();
        }

        clsDoublyLinkedList *temp = current->getNext();
        current->setNext(NULL);

        delete temp;
        _size--;
    }

    clsDoublyLinkedList *find(data value)
    {
        clsDoublyLinkedList *head_ = head;

        while (head_ != NULL)
        {
            if (head_->getValue() == value)
                return (head_);

            head_ = head_->getNext();
        }

        return (NULL);
    }

    int  size(void)
    {
        return (_size);
    }

    bool isEmpty(void)
    {
        return (_size == 0);
    }

    void printList()
    {
        clsDoublyLinkedList *head_ = head;

        while (head_ != NULL)
        {
            std::cout << head_->_value << " ";
            head_ = head_->_next;
        }
        std::cout << "\n";
    }
};
