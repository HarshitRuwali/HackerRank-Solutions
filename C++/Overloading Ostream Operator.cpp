
// Enter your code here.
ostream& operator<<(ostream& o, const Person& p)

{

    o << "first_name=" << p.get_first_name() << ",last_name=" << p.get_last_name();
    return o;
}

