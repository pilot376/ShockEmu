fix
=====

In the original version, Mouse control doesn't work properly. So, I tried to fix mouseLook.
Actually, it doesn't work properly, I think.. better than old one.
I hope someone who knows well about IOHID and object-c fixes it.


Setup
=====

ShockEmu requires the OS X command line development tools to be installed.  Installation steps:

	git clone https://github.com/daeken/ShockEmu.git
	./build.sh <filename>.se
	./run.sh

It depends on your system having PS4 Remote Play installed at `/Applications/RemotePlay.app`.  If this is not the case, you'll need to modify `run.sh` accordingly.

SE file format
==============

SE files are, generally speaking, a mapping between an input key, mouse button, or mouse movement to a DualShock 4 input.  See the example file (`nomanssky.se`) for a breakdown of the format.

How it works
============

ShockEmu works by intercepting the IOHID calls of PS4 Remote Play application and presents an emulated DualShock controller.  It also hooks into the input routines of the application, to catch keyboard and mouse inputs, which then get mapped according to your SE file.


수정사항
=====

처음 버전을 했을때, 마우스를 사용하면 화면이 돌아가는 현상이 발생해서 조금 수정했습니다.
예전처럼 화면이 막 돌아가지는 않지만, 그래도 어느정도 사용 가능할정도로 수정했습니다.
오브젝트-C나 IOHID 잘 아시는 분이 수정해주시면 좋겠네요.

설치
=====

ShockEmu는 맥OS에서 명령어 입력이 가능한 도구가 설치되어 있어야합니다. (ex. 터미널). 터미널에서 아래와 같이 실행하세요:

    git clone https://github.com/daeken/ShockEmu.git
    ./build.sh <filename>.se
    ./run.sh

초기 설정은 PS4 Remote 앱이 `/응용 프로그램/PS4 리모트 플레이` 경로에 설치되어 있어야 작동합니다. 만약 이 경로가 아니라면 `run.sh` 파일에 경로룰 수정해야합니다.

SE 파일 형식
==============

.SE 파일은 키보드 및 마우스 키입력을 DualShock 4 입력으로 바꾸는 역할을 합니다. `nomanssky.se`나 `monsterHunter.se` 파일을 참고해서 원하는 키세팅을 만들면 됩니다.

작동 원리
============

ShockEmu는 PS4 리모트 플레이 앱으로 전송되는 입력값들을 가로채서 듀얼쇼크 4로 입력하는 것처럼 바꿔주는 역할을 합니다. ShockEmu는 .SE파일에서 설정한 키셋팅 정보를 사용해 키보드나 마우스 입력을 듀얼쇼크 4 입력으로 변환하여 PS4 리모트 플레이 앱으로 전송하게됩니다.
