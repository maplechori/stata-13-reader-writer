#include "State.h"
#include "Stata.h"
#include "StataDB.h"
#include <sqlite3.h>


class SQLite : public Database {
  
public:
    SQLite();
    bool connect(void *);
    bool write(Context & ctx);
    bool close();
    ~SQLite();
private:
    sqlite3 *db;
    

};