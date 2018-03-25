public class a {

    public static void main(String[] args) {
        Node<Integer> head = null;
        Integer[] listValues = new Integer[] {1, 2, 3};

        head = new Node<Integer>(); // replace with your implementation
        head.setValuesFromArray(listValues);

        System.out.println(listValues[0]+" "+head.getValue());
        if(head.getNext()!=null)
            System.out.println("TRUE");
        else
            System.err.println("FALSE");
        System.out.println(listValues[1]+" "+head.getNext().getValue());
        if(head.getNext().getNext()!=null)
            System.out.println("TRUE");
        else
            System.err.println("FALSE");
        System.out.println(listValues[2]+" "+head.getNext().getNext().getValue());
        if(head.getNext().getNext().getNext()==null)
            System.out.println("TRUE");
        else
            System.err.println("FALSE");
    }

}
