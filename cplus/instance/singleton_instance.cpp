// 单例模式（singleton-instance）
#include <iostream>
using namespace std;

class BusinessAuthRouteDao {
 public:
  BusinessAuthRouteDao(): i_(0) {}
  ~BusinessAuthRouteDao() {}

  static BusinessAuthRouteDao* Instance() {
    if (_inst == NULL) {
      _inst = new BusinessAuthRouteDao();
    }
    return _inst;
  }
  
  int i_;
  void setNum(int i) {
    i_ = i;
  }
  
  void showNum() {
    cout << i_ << endl;
  }
private:
  static BusinessAuthRouteDao *_inst;
};

BusinessAuthRouteDao* BusinessAuthRouteDao::_inst = NULL;

int main() {
    BusinessAuthRouteDao *obj1 = BusinessAuthRouteDao::Instance();
    BusinessAuthRouteDao *obj2 = BusinessAuthRouteDao::Instance();
    
    obj1->setNum(1111);
    obj1->showNum();
    obj2->showNum();
    
    obj2->setNum(200);
    obj1->showNum();
    obj2->showNum();
    
    return 0;
}
