Gnome-doc-utils requires libxml2 to be compiled
with the python modules enabled, to do so:
  $ brew install libxml2 --with-python


Generally there are no consequences of this for you.
If you build your own software and it requires this formula, you'll need
to add its lib & include paths to your build variables:

    LDFLAGS  -L/usr/local/Cellar/libxml2/2.8.0/lib
    CPPFLAGS -I/usr/local/Cellar/libxml2/2.8.0/include

vi htmltitle.cpp
