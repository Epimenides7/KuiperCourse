//
// Created by fss on 22-11-17.
//
#include <gtest/gtest.h>
#include <glog/logging.h>
#include <filesystem>

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  google::InitGoogleLogging("Kuiper");
  std::string log_path = "./log/";
  if (!std::filesystem::exists(log_path)){
      std::filesystem::create_directories(log_path);
  }
  
  FLAGS_log_dir = log_path;
  FLAGS_alsologtostderr = true;

  LOG(INFO) << "Start test...\n";
  return RUN_ALL_TESTS();
}