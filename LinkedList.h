#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

template<class T>
class Node {
    public:
        Node(T elemen) : value(elemen) {
            next = NULL;
        }
        T value;
        Node<T> *next;
};

template<class T>
class LinkedList {
    public:
        Node<T> *first;
        Node<T> *last;

        LinkedList() {
            first = NULL;
            last = NULL;
        }

        ~LinkedList() {
            Node<T> *temp = LinkedList<T>::first;
            while (temp != NULL) {
                temp = temp->next;
                delete(LinkedList<T>::first);
                LinkedList<T>::first = temp;
            }
        }

        void add(T element) {
            //Menambahkan elemen ke indeks terakhir
            Node<T> *newNode = new Node<T>(element);

            Node<T>* temp = first;
            if (temp != NULL) {
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            } 
            else {
                first = newNode;
            }

        } 

        void remove(T element) { 
            //Menghapus elemen dalam list
            Node<T> *temp = first;
            if (temp != NULL) {
                if (temp->value == element) {
                    first = temp->next;
                }
                else {//BUKAN ELEMEN PERTAMA
                    while (temp->next != NULL) {
                        if (temp->next->value == element) {
                            temp->next = temp->next->next;
                        }
                        else {
                            temp = temp->next;
                        }
                    }
                }
            }
        }

        bool isEmpty() const { 
            //Mengecek list kosong atau tidak
            return first == NULL;
        }
        int find(T element) const {
            //menemukan indeks elemen
            Node<T> *temp = first;
            int idx = 0;
            bool Found = false;
            if (temp != NULL) {
                while (!Found && temp != NULL) {
                    if (temp->value == element) {
                        Found = true;
                    }
                    else {
                        idx++;
                        temp = temp->next;
                    }
                }

                if (temp != NULL) {
                    return idx;
                }
                else {
                    return -1;
                }
            }
            else { //LIST KOSONG
                return -1;
            }
        } 

        T get(int indeks) const {
            Node<T> *temp = first;
            int idx = 0;
            while (idx < indeks) {
                temp = temp->next;
                idx++;
            }
            return temp->value;
        }
};
#endif