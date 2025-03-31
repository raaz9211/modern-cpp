template<typename T>
void f(ParamType param);

f(expr); // call f with some expression

Case 1 : ParamType is a pointer or reference type, but not a universal reference.
Case 2 : ParamType is a universal reference.
Case 3 : ParamType is neither a pointer nor a reference



Things to Remember
• During template type deduction, arguments that are references are treated as
non-references, i.e., their reference-ness is ignored.
• When deducing types for universal reference parameters, lvalue arguments get
special treatment.
• When deducing types for by-value parameters, const and/or volatile argu‐
ments are treated as non-const and non-volatile.
• During template type deduction, arguments that are array or function names
decay to pointers, unless they’re used to initialize references.