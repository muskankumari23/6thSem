public class Linkedlist {
    static class Node {
        int data;
        Node next;
        Node(int val) { this.data = val; this.next = null; }
    }
    Node head;

    void insertAtBegin(int val) {
        Node newNode = new Node(val);
        newNode.next = head;
        head = newNode;
    }
    void display() {
        Node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
    boolean search(int val) {
        Node temp = head;
        while (temp != null) {
            if (temp.data == val) {
                System.out.println("True");
                return true;
            }
            }
            temp = temp.next;
        }
        System.out.println("False");
        return false;

      void deleteAtBegin(){
        if (head == null) {
            System.out.println("List is empty");
        } else {
            head = head.next;
        }
    }

    public static void main(String[] args) {
        Linkedlist list = new Linkedlist();
        list.insertAtBegin(10);
        list.insertAtBegin(20);
        list.display();
    }
}
            // void boolean Search( val, data){
            //     current=head;
            //     while( temp=current){
            //         if (current == data){
            //             System.out.println("True");
            //         }else {
            //              System.out.println("False");
            //         }
            //         current = current.next;
            //     }
