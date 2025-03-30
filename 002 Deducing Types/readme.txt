template<typename T>
void f(ParamType param);

f(expr); // call f with some expression

Case 1 : ParamType is a pointer or reference type, but not a universal reference.
Case 2 : ParamType is a universal reference.
Case 3 : ParamType is neither a pointer nor a reference