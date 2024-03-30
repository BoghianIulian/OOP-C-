
#include "repofile.h"
#include "repository.h"
#include "repofilemost.h"
#include "service.h"
#include "ui.h"
#include "teste.h"

int main() {
    test_service();
    test_repo();
    test_repo_file();
    RepositoryFile repof(R"(C:\Users\Iulian\Desktop\OOP ultimul lab\produse.txt)");
    Repository repo;
    RepoFileMost repofm(R"(C:\Users\Iulian\Desktop\OOP ultimul lab\produse.txt)");
    Service serv(repof);
    UI ui(serv);
    ui.printmenu();
    return 0;
}
