#include "head.h"
#include "Person.h"
#include "Serialize.h"

int SerializeX::Serialize(const char *pFilePath, Person p){
	int isSerialize = 0;
	File *stream;
	if((stream = fopen(pFilePath, "w+")) == NULL){
		cout<<"The file"<< pFilePath << "can't be open"<<endl;
	}else{
		fwrite(&p.age, sizeof(int), 1, stream);
		isSerialize = 1;
		fclose(stream);
	}
	return isSerialize;
}

int SerializeX::Deserialize(const char *pFilePath, Person &p){
	//取出文件中的数据，将该数据重新赋值给一个对象
	File *stream;
	int isDeSerial = 0;
	if(fopen(pFilePath, "r") == NULL){
		cout<<"The file"<<*pFilePath<<"can't be opened"<<endl;
	}else{
		int x;
		int xNum = fread(x, sizeof(int), 1, stream);
		p.age = x;
		isDeSerial = 1;
		fclose(stream);
	}
	return isDeSerial;
}


void SerializeX::show(char *fileName){
	//将文件内容输出到控制台
	File *stream;
	if((stream = fopen(fileName, "r")){
		cout<<"The file"<<*filename<<"can't be opened"<<endl;
	}else{
		int buffer;
		int bufferSize = fread(buffer, sizeof(int), 1, stream);
		cout<<"Age is: "<<buffer<<endl;
	}
}

int main(){
	Person x(23);
	SerializeX s;
	char *file = "";
	if(s.Serialize(file, x)){
		cout<<"Serialized Success"<<endl;
	}else{
		cout<<"Serialized Fail !"<<endl;
	}
	s.show(file);
	Person p;
	s.deSerialize(file, p);
	cout<<"The new person's age is :"<<p.age<<endl;
	return 0;
}
