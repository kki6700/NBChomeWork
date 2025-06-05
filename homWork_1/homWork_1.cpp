
#include <iostream>

using namespace std;


double solution(int scores[], int scoresSize){

	int sum = 0;
	int i = 0;
	while ( i < scoresSize)
	{
		cout << "점수를 입력 하세요: ";
		cin >> scores[i];
		if (0 <=scores[i] && scores[i] <= 100) {
			
			sum += scores[i];

			cout << "현재 배열값: " << scores[i]<< endl;
			i++;
		}
		else {
			cout << "0미만 100초과의 값을 넣을 수 없습니다." << endl;
			
		}
		
	}
	return sum;
}

double solution2 (int sum, int scoresSize){

	double average = 0;
	return average = sum / scoresSize;
	
}

int main()
{
	int scores[5];
	int *p = scores;
	int scoresSize = sizeof(scores) / sizeof(scores[0]);
	double sum = 0;
	cout << "scores의 배열: " << scores << " *p 의 값: " << p<< endl;
	
	
	sum = solution(p, scoresSize);

	int temp = 0;
	cout << "입력받은 점수 합계: " << sum  <<"점" <<  " 평균: " << solution2(sum, scoresSize) << "점" <<endl;
	//버블 정렬 내림차순
	for (int i = 0; i < scoresSize; i++) {
		
		//j가 (score size -1 -i) 보다 작을때 마다 실행
		for (int j = 0; j < (scoresSize - 1) - i; j++) {
			//현 j번째 요소와 j+1 번째 요소를 비교해서 j번째 요소가 j+1 요소보다 작다면 실행한다.
			if (scores[j] < scores[j + 1]) {
				
				//temp에 j번째 요소를 임시 저장
				temp = scores[j];
				//j+1번째 요소를 j번째 요소에 치환한다. 
				scores[j] = scores[j + 1];
				//j+1요소에는 temp요소로 치환한다.
				scores[j + 1] = temp;
			}
		}
	}
	cout << "내림차순:";
	for (int i = 0; i < scoresSize; i++) {
		cout <<" "<< scores[i];	
	}
	cout<< endl;
	//버블정렬 오름차순
	for (int i = 0; i < scoresSize; i++) {

		for (int j = 0; j < (scoresSize - 1) - i; j++) {
			// 현 j번째 요소와 j + 1 번째 요소를 비교해서 j번째 요소가 j + 1 요소보다 크다면 실행한다.
			if (scores[j] > scores[j + 1]) {

				temp = scores[j];
				scores[j] = scores[j + 1];
				scores[j + 1] = temp;


			}
		}
	}
	cout << "오름차순:";
	for (int i = 0; i < scoresSize; i++) {
		cout << " " << scores[i];	
	}
	cout << endl;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
