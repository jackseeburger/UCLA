void listAll(const MenuItem* m, string path) // two-parameter overload
{
    if(path != "")
    {
    cout << path << endl;
    }
    if(m->menuItems() == nullptr)
    {
        //cout<< path << endl;
        return;
    }
    for(vector<MenuItem*>::const_iterator i = m->menuItems()->begin(); i != m->menuItems()->end();i++)
    {
        if(path != "")
        {
            
            
            listAll(*i, path + '/' + (*i)->name());
            
        }
        else
        {
            
            listAll(*i, path + (*i)->name());
            
        }
        
    }
}
