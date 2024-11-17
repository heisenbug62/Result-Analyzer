#include iostream
#include fstream
using namespace std;

int main()
{
	ifstream read(sample.txt);
	ofstream write(result.txt);
	if (!read) {
		cout  file not found ;
	}
	else
	{
		while (!read.eof())
		{
			char name[50];
				char reg[50];
			int ass, quiz, mid, final;
			int total;
			char grade;
			read.getline(name, 50, ',');
			read  reg;
			read  ass  quiz  mid  final;

			total = (ass  0.15) + (quiz  0.15) + (mid  0.25) + (final  0.45);

			if (total  86)
			{
				grade = 'A';
			}
			else if (total  75 && total  86)
			{
				grade = 'B';
			}
			else if (total  65 && total  75)
			{
				grade = 'C';
			}

			else if (total  55 && total  65)
			{
				grade = 'D';
			}
			else if (total  55)
			{
				grade = 'F';
			}
			write  name  't'  reg  't'  grade;
		}
	}
		read.close();
		write.close();
		
		return 0;

}