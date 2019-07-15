#include <QCoreApplication>
#include <iostream>
#include <stdio.h>
#include <boost/lexical_cast.hpp>
#include <QString>
#include <string>

using namespace std;

class Node{
    public:
        string content;
    Node * nextnode;
    Node (string x){
        content = x;
        nextnode = NULL;
    }
    Node(string x, Node * y){
        content = x;
        nextnode = y;
    }
};

class List{
    Node * headnode;
    public:
        List(){
            headnode = NULL;
        }
    void addNode(string content){
        Node * node;
        if(headnode==NULL){
            headnode = new Node(content, NULL);
        }
        else{
           node = headnode;
           while(node->nextnode != NULL){
               node=node->nextnode;
           }
           node->nextnode = new Node(content, NULL);
        }
    }
    void print(){
        Node * node;
        node = headnode;
        while (node != NULL){
            //int x = boost::lexical_cast<int>(node->content)
                int x =    QString::fromStdString(node->content).toInt();
            cout << x << "\n";
            node = node->nextnode;
        }
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    List lst;
    lst.addNode("45");
    lst.print();
    return 0;
    return a.exec();
}

