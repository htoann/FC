import java.util.ArrayList;

public class Book extends Publications {
    ArrayList <String> listauthor = new ArrayList<String>();
    Publications p = new Publications();
    public void Nhap() {
        p.Nhap();
        int index;
        System.out.print("Enter Number Of Authors: ");
        do {
            index = sc.nextInt();
            if(index < 0) System.out.println("Error. Please Retype!");
        } while(index < 0);
        System.out.print("Enter Author: ");
        for(int i = 0; i <= index; i++) {
            String Author;
            Author = sc.nextLine();
            listauthor.add(Author);
        }
    }
    public void Xuat() {
        p.Xuat();
        System.out.print("List Author: ");
        int n = listauthor.size();
        for(int i = 0; i < n - 1; i++) {
            System.out.print(listauthor.get(i + 1) + ", ");
        }
        System.out.println("\b\b ");
    }
}
