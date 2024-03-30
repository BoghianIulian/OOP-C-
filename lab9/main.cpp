#include "teste.h"
#include "repo.h"
#include "service.h"
#include "ui.h"
#include "filerepo.h"
int main() {
    Repo repo;
    FileRepo fileRepo("car.txt");
    fileRepo.loadFromFile();
    Service service(fileRepo);
    UI ui(service);
    ui.menu();
    teste_repo();
    teste_car();
    teste_service();
    return 0;
}
