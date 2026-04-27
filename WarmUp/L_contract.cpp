 char d;
  string n;
 while (cin>>d>>n && (d!='0' && n!="0")) {
    string ans="";
    each(x,n){
        if(x!=d) ans+=x;
    }
    if(sz(ans)==0) ans="0";
    each(z,ans){
        if(z=='0' ) ans="0";
    }
    cout<<ans<<endl;
  }
