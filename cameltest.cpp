
string CamelCase(string str) 
{
	for (int x = 0; x < str.size(); x++)
	{
		if (x == 0)
		{
			str[x] = tolower(str[x]);
			continue;
		}

		if (int(str[x-1]) >= 32 && int(str[x-1]) <= 47)
		{
			str[x] = toupper(str[x]);
			str.erase(str.begin() + x-1);
			x--;

		}
		else
		{
			str[x] = tolower(str[x]);
		}
	}

	return str;
}

int main() 
{
	cout << CamelCase("*daniel *likes-Coding") << endl; //DanileLikesCoding
	cout << CamelCase("*cats AND*Dogs-are Awesome") << endl; // CatsAndDogsAreAwesome
	cout << CamelCase("*A b c d-e-f%g") << endl; // ABCDEFG
	return 0;
}

/*Outputnya :
DanileLikesCoding
CatsAndDogsAreAwesome
ABCDEFG*/