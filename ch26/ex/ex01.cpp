// BUG BUSTERS: Point out the bug in this code:
// std::auto_ptr<SampleClass> object (new SampleClass ());
// std::auto_ptr<SampleClass> anotherObject (object);
// object->DoSomething ();
// anotherObject->DoSomething();

// std::auto_ptr - is Destructive copy smart pointer.
// So 'object' doesn't exist after creating 'anotherObject'.
