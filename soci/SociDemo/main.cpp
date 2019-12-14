#include<iostream>
#include<soci/soci.h>

int main()
{
    try
    {
        int count = 0;
        //���ӷ���һ
        soci::session conn("mysql", "host=127.0.0.1 port=3306 db=MyQQ  user=root password=root");
        //���ӷ�����
        //soci::session conn;
        //conn.open("mysql://host=127.0.0.1 port=3306 db=MyQQ  user=root password=root");
        conn << "select count(*) from user_record"
            , soci::into(count);
        std::cout << count;
    }
    catch (const std::exception& e)
    {
        std::cout << "Operate failed,error:" << e.what();
    }

    
    system("pause");
    return 0;
}