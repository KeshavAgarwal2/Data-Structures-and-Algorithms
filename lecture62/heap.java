import java.util.ArrayList;
public class heap{
    private ArrayList<Integer>arr;
    public heap(){
        this.arr=new ArrayList<>();
    }
    public void upheapify(int idx)  //logn
    {
        int pidx=((idx-1)/2);
        if(arr.get(pidx)<arr.get(cidx)){
            swap(pidx,cidx);
            upheapify(pidx);
        }
    }
    public void downheapify(int idx)    //logn
    {   
        int maxidx=idx;
        int lci=2*idx+1;
        int rci=2*idx+2;
        if(lci<arr.size() && arr.get(maxidx)<arr.get(lci))
        maxidx=lci;
        if(rci<arr.size() && arr.get(maxidx)<arr.get(rci))
        maxidx=rci;
        if(maxidx!=idx)
        {
            swap(maxidx,idx);
            downheapify(maxidx);
        }
    }
    public void swap(int i,int j){
        int val1=arr.get(i);
        int val2=arr.get(j);
        arr.set(i,val2);
        arr.set(i,val1);
    }
    public void push(int val)
    {
        arr.add(val);
        upheapify(arr.size()-1);
    }
    public void pop(int val)
    {
        swap(0,arr.size()-1);
        arr.remove(arr.size()-1);
        downheapify(0);
    }
    public void top()
    {
        return arr.get(0);
    }
    public void update(int idx,int val)
    {
        arr.set(idx, val);
        upheapify(idx);
        downheapify(idx);
    }
}