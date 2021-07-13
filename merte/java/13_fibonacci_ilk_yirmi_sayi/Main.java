class Main {
    public static void main(String[] args) {
        int temp;
        int fibFirst=0, fibSecond=1;
        System.out.print(fibFirst+"\n"+fibSecond+"\n");
        
        for(int i=2;i<21;++i){  
            temp=fibFirst+fibSecond;
            fibFirst=fibSecond;
            fibSecond=temp;
            System.out.print(temp+"\n");
        }
    }
}
