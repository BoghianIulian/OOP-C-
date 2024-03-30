#include <iostream>
#include "repo.h"
#include "apartament.h"
#include "teste.h"
#include "service.h"
#include "ui.h"

int main() {
    Repo repo;
    Service service(repo);
    UI ui(service);
    ui.menu();
    teste_repo();
    teste_service();
    return 0;
}
