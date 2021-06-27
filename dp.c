

if(visited[j]!=1 && b==0){
    if(a[j]>a[i]){
        b++;
    }else{
        cnt++;
        if(j!=n-1)
            visited[j]=1;
    }
}else
    b--;
