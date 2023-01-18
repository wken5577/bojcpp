#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

static int now = 100;
static int target_num;
int number_table[10] = {1,1,1,1,1,1,1,1,1,1};

struct compare{
    bool operator()(int a, int b){
        return (abs(a - target_num) > abs(b - target_num));
    }
};

bool check(int n){
    if (n == 0){
        if (number_table[0] == 0){
            return false;
        }
        else{
            return true;
        }
    }
    while (n > 0){
        if (number_table[n % 10] == 0){
            return false;
        }
        n /= 10;
    }
    return true;
}

int get_number_size(int num){
    int size = 0;
    while (num > 0){
        size++;
        num /= 10;
    }
    return size;
}

int search(){
    int num1 = INT32_MAX;
    int num2 = INT32_MAX;
    for (int i = target_num; i >= 0; i--){
        if (check(i)){
            num1 = i;
            break;
        }
    }
    for (int i = target_num; i < target_num + abs(target_num - now); i++){
        if (check(i)){
            num2 = i;
            break;
        }
    }
    int near_num;
    if (abs(num1 - target_num), abs(num2 - target_num){

    }
    return get_number_size(near_num) + abs(target_num - near_num);
}


int main(){

    cin >> target_num;

    int n;
    cin >> n;

    for (int i =0 ; i < n; i++){
        int tmp;   
        cin >> tmp;
        number_table[tmp] = 0;
    }

    int answer = abs(target_num - now);
    answer = min(answer, search());
    cout << answer << endl;
}
