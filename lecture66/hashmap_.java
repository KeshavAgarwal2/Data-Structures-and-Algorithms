import java.util.HashMap;
import java.util.ArrayList;
public class test
{
    public static void main(String []args)
    {
        HashmapOperation("sdfghjklwertxcvbnmsdfghj");
    }   
    public static HashmapOperation(String str){
        HashMap<String,Integer>map=new HashMap<>();
        map.put("USA",100);
        map.put("Pak",100);
        map.put("NEPAL",80);
        map.put("Italy",90);
        map.put("India",1000);
        map.put("India",2000);
        System.out.println(map);
    }
    public static HashmapOperation02(String str){
        HashMap<Character,ArrayList<Integer>>map=new HashMap<>();
        for(int i=0;i<str.length();i++)
        {
            char ch=str.charAt(i);
            if(!map.containsKey(ch))map.put(ch,new ArrayList<>());
            map.get(ch).add(i);
        }
        for(Character ch:map.keySet())
        System.out.prinln(ch+"->"+map.get(ch));
    }
    public static HashmapOperation03(String str){
        HashMap<Character,Integer>map=new HashMap<>();
        for(int i=0;i<str.length();i++)
        {
            char ch=str.charAt(i);
            //if(!map.containsKey(ch))map.put(ch,1);
            //else map.get(ch,map.get(ch)+1);  //update
            map.put(ch,map.getOrDefault());
        }
        for(Character ch:map.keySet())
        System.out.prinln(ch+"->"+map.get(ch));
    }

}