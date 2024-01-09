#include <iostream>
#include "httplib.h"

using namespace std;

class Resource
{   
private:
    
public:
    void create(const httplib::Request& req, httplib::Response& res) {

    }
    void update(const httplib::Request& req, httplib::Response& res) {

    }
    void find(const httplib::Request& req, httplib::Response& res) {

    }
    void get(const httplib::Request& req, httplib::Response& res) {
        res.set_content("{\"message\": \"Don't say that it is hard before you try!!!\"}", "application/json");
    }
    void remove(const httplib::Request& req, httplib::Response& res) {
        
    }
};

int main() {
    httplib::Server server;

    Resource resource;

    server.Get("/resource", [&](const httplib::Request &req, httplib::Response &res) {
        resource.get(req, res);
    });

    cout << "Server is being started on port :8000" << endl;

    if (server.listen("localhost", 8000)) {
        cout << "Server started on port 8000" << endl;
    } else {
        cerr << "Error while starting http server" << endl;
    }

    return 0;
}
