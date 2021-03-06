#ifndef ___MANAGER_HPP___
#define ___MANAGER_HPP___

#include "fetch/FetchedInfoScholarship.h"
#include "htmlgen/Database.h"
#include "htmlgen/HtmlGenBase.h"

namespace findscholarships {

class Manager
{
public:
    void
    processBatch(const std::string &file_url_collection,
                 Database &db);
    
private:
    bool
    getInput(std::ifstream &file_input,
             FetchedInfoScholarship &fis);
    
    void
    processSingle(FetchedInfoScholarship &fis,
                  Database &db);
    
    HtmlGenBase*
    getGenerator(const std::string &url);
};
    
} // namespace findscholarships 


#endif // ___MANAGER_HPP___
