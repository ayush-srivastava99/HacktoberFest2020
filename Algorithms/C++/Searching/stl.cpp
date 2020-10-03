For map:
auto it=mm.lower_bound(key);
if(it!=mm.end()&&it->first==key)
return "YES";
else
return "No";

For vector:
i=lower_bound(v.begin(),v.end(),key)-v.begin();
return v[i];
