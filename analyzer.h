#ifndef ANALYZER_H
#define ANALYZER_H

#include <datagate.h>

class Analyzer : public DataGate
{
protected:
    DataGate *dG;
public:
    Analyzer(DataGate*);
};

#endif // ANALYZER_H
