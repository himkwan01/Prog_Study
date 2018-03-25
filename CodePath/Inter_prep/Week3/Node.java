@SuppressWarnings("unchecked")
public class Node<E extends Object>{
    E data;
    Node<E> next;
    
    Node(){
        data = null;
        next = null;
    }

    E getValue(){
        return data;
    }

    void setValue(E value){
        this.data = value;
    }

    Node<E> getNext(){
        return next;
    }

    void setNext(Node<E> node){
        this.next = node;
    }

    void setValuesFromArray(E[] listValues){
        Node<E> worker;
        System.err.println(listValues.length);
        if(listValues.length>0){
            data=listValues[0];
        }
        worker = this;
        for(int i=1;i<listValues.length;i++){
            worker.setNext(new Node<E>());
            worker = worker.next;
            worker.setValue(listValues[i]);
        }
    }
}
