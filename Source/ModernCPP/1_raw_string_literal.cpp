#include <iostream>

int main() {
  //正常字符串
	std::string no_raw_str1 = "D:\hello\world\test.text";
	std::cout << no_raw_str1 << std::endl;

	std::string no_raw_str2 = "D:\\hello\\world\\test.text";
	std::cout << no_raw_str2 << std::endl;

  //原始字符串字面量
  std::string raw_str1 = R"(D:\hello\world\test.text)";
	std::cout << raw_str1 << std::endl;

	std::string raw_str2 = R"(D:\\hello\\world\\test.text)";
	std::cout << raw_str2 << std::endl;

  //添加分隔符，以避免出现错误：刚好字符串中存在)"提前结束
  std::string raw_str3 = R"code(D:\\hello\\world\\test.text)code";
	std::cout << raw_str3 << std::endl
  ;

  std::string fozu = R"(
                      _ooOoo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      O\ = /O
                  ____/`---'\____
                .   ' \\| |// `.
                  / \\||| : |||// \
                / _||||| -:- |||||- \
                  | | \\\ - /// | |
                | \_| ''\---/'' | |
                \ .-\__ `-` ___/-. /
              ___`. .' /--.--\ `. . __
          ."" '< `.___\_<|>_/___.' >'"".
          | | : `- \`.;`\ _ /`;.`/ - ` : | |
            \ \ `-. \_ __\ /__ _/ .-` / /
    ======`-.____`-.___\_____/___.-`____.-'======
                      `=---='
	)";

  std::cout << fozu << std::endl;
	return 0;
}
