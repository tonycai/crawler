#include <iostream>
#include <time.h>

using namespace std;

int main() {
    string input_line;
    long line_count = 0;
    time_t start = time(NULL);
    int sec;
    int lps;

    while (cin) {
        getline(cin, input_line);
        if ( input_line != "" )
            cout << input_line << endl;
        if (!cin.eof())
            line_count++;
    };

    sec = (int) time(NULL) - start;
    cerr << "Read " << line_count << " lines in " << sec << " seconds.";
    if (sec > 0) {
        lps = line_count / sec;
        cerr << " LPS: " << lps << endl;
    } else
        cerr << endl;
    return 0;
}

// Compiled with:
// g++ -O3 -o readline_test read_pipeline.cpp
