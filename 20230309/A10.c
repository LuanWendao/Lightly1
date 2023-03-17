#include <stdio.h>
#include <string.h>
int isLeap(int year) {
    //分析是否是闰年
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int getDaysByMonth(int year, int month) {
    //根据年月，获取对应月的天数
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = months[month];
    if (month == 2 && isLeap(year))//如果闰年又是2月，则加1天
        days += 1;
    return days;
} 

int main() {
    char s[20], *p, *pos;
    int year = 0, month = 0, day = 0;
    int cnt_ = 0;//统计 -的个数
    int tmp;
    gets(s);//输入串

    //以下功能统计 -的个数
    p = s;
    pos = strstr(p, "-");
    while (pos) {
        cnt_ += 1;
        p = pos + 1;
        pos = strstr(p, "-");
    }

    //- 的个数必须是2个，其它情况 直接报错
    if (cnt_ != 2) {
        puts("Incorrect format:YYYY-M[M]-D[D]");
        return 0;
    }
    
    //以下功能获取三个值，年月日
    p = strtok(s, "-");
    while (p) {
        tmp = 0;
        if (year == 0 && strlen(p) == 4)
            tmp = sscanf(p, "%d", &year);//p的字符串值转为year
        else if (month == 0 && (strlen(p) == 1 || strlen(p) == 2))
            tmp = sscanf(p, "%d", &month);//p的字符串值转为month
        else if (strlen(p) == 1 || strlen(p) == 2)
            tmp = sscanf(p, "%d", &day);//p的字符串值转为day

        //scanf如果失败直接报错
        if (tmp != 1) {
            puts("Only these characters:1234567890-");
            return 0;
        }        
        p = strtok(NULL, "-");
    }

    //分析月是否合法
    if (month < 1 || month > 12) {
        puts("month error: 1<=month<=12");
        return 0;
    }

    //分析日是否合法
    if (day < 1 || day > getDaysByMonth(year, month)) {
        printf("day error:1<=day<=%d", getDaysByMonth(year, month));
        return 0;
    }

    printf("%d-%d-%d : OK\n",year,month,day);

    return 0;
}