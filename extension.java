import java.io.File;
public class GetFileExtension 
{
    public static void main(String[] args) 
    {
        File file = new File("/Users/pankaj/java.txt");
        System.out.println("File extension is: "+getFileExtension(file));
        file = new File("/Users/pankaj/temp");
        System.out.println("File extension is: "+getFileExtension(file));
        file = new File("/Users/pankaj/java.util.txt");
        System.out.println("File extension is: "+getFileExtension(file));
        file = new File("/Users/pankaj/.htaccess");
        System.out.println("File extension is: "+getFileExtension(file));
    }
    private static String getFileExtension(File file) {
        String fileName = file.getName();
        if(fileName.lastIndexOf(".") != -1 && fileName.lastIndexOf(".") != 0)
        return fileName.substring(fileName.lastIndexOf(".")+1);
        else return "";
    }
}
