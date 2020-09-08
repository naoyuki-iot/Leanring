#include <iostream>
#include <string>
#include <opencv2/highgui.hpp>

int main(int argc, char* argv[]) {

  // コマンドライン引数を読む
  if (argc < 2) {
    std::cerr << "hello-world.png" << std::endl;
    return -1;
  }
  std::string path = argv[1];

  try {
    // ファイルから画像を読み込む
    cv::Mat image = cv::imread(path);

    // 画像をウィンドウに表示する
    cv::String winname = path;
    cv::imshow(winname, image);

    // キーが押されるまで待つ
    cv::waitKey();
  } catch (const cv::Exception& e) {
    const char* err_msg = e.what();
    std::cerr << "エラー発生: " << err_msg << std::endl;
    return -1;
  }

  return 0;
}