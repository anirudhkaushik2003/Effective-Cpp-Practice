class Widget
{
public:
    Widget();                            // default constructor
    Widget(const Widget &rhs);           // copy constructor
    Widget &operator=(const Widget &rhs) // copy assignment operator
};

Widget w1; // invoke default constructor
Widget w2(w1); // invoke copy constructor
w1 = w2; // invoke copy assignment operator

Widget w3 = w2; // invoke copy constructor
// copy constructor was used here as a new object is defined

// assignment is used when no new object is being defined;

Widget w2; // default constructor
w2 = w3; // copy assignment operator
Widget w2 = w3 // invoke copy constructor

// Copy constructor helps define how an object is 
// passed by value

bool hasAcceptableQuality(Widget w);

Widget w2;
if(hasAcceptableQuality(w))

// here paraeter w is passed to hasAcceptableQuality by value
// so w2 is copied into w by the widget's copy constructor