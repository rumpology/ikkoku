#pragma once
#include <cstdio>
#include <ctime>

void current_time(char (&buffer)[20]) {

  std::time_t now = std::time(nullptr);
  std::tm *local_tm = std::localtime(&now);
  std::sprintf(buffer, "%04d-%02d-%02d_%02d-%02d-%02d",
               local_tm->tm_year + 1900, local_tm->tm_mon + 1,
               local_tm->tm_mday, local_tm->tm_hour, local_tm->tm_min,
               local_tm->tm_sec);
}
