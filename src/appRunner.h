#include<iostream>

class appRunner{
public:
  appRunner();
  appRunner(const appRunner&) = delete;
  appRunner(const appRunner&&) = delete;
  appRunner& operator=(const appRunner&) = delete;
  appRunner& operator=(const appRunner&&) = delete;

  int run();
  void statusUpdate();

private:
  bool isInitialised = false;
};