public class linkedlist1 {
    Node head;

    class Node {
        int data;
        Node next;

        Node ( int data ){
            this.data = data;
            this.next = null;
        }
    }
    public void insertAtEnd ( int data ){
        Node newNode = new Node ( data );
        if ( head == null ){
            head = newNode;
            return;
        }
        Node current = head;
        while ( current.next != null ){
            current = current.next;
        }
        current.next = newNode;
    }

    public void printlinkedlist ( Node head , Node current ){
        if ( current == null ){
            return;
        }
        System.out.println ( current.data );
        printlinkedlist ( head , current.next );
    }

    public void reverseLinkedList ( ){
        Node prev = null;
        Node current = head;
        Node next = null;

        while ( current != null ){
            next = current.next ;
            current.next=prev;
            prev = current;
            current = next;
        }   
        head = prev;
    }
}
