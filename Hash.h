#pragma once

#include<iostream>
using namespace std;
#ifndef MYHASH
#define MYHASH

template<class T>
class myhash
{
public:
	//hash variables for words that start with different letters
	/*T* hashA;
	T* hashB;
	T* hashC;
	T* hashD;
	T* hashE;
	T* hashF;
	T* hashG;
	T* hashH;
	T* hashI;
	T* hashJ;
	T* hashK;
	T* hashL;
	T* hashM;
	T* hashN;
	T* hashO;
	T* hashP;
	T* hashQ;
	T* hashR;
	T* hashS;
	T* hashT;
	T* hashU;
	T* hashV;
	T* hashW;
	T* hashX;
	T* hashY;
	T* hashZ;
	T* hashaMal;*/

	T **hashArr;
	
	//Tree class variables
	int  size = 0;
	const static int hashSize = 133177;
	long double foundComp = 0.0;
	long double notFoundComp = 0.0;
	long double compares = 0.0;

	
	//constructor
	myhash()
	{
		hashArr = new T*[27];
		size = 0;
		for (int i = 0; i < 27; i++)
		{
			hashArr[i] = new T[hashSize];
			
		}
	}

	//Find hash function is used to get the key for a word
	int findHash(T word)
	{
		long int val = 0;
		for (int i = 0; i <= word.size(); i++)
		{
			val += (int)word[i] * (i*i);
		}
		return val % hashSize;
	}

	//insert function
	void insert(T item, T *&letterHead)
	{
		if (item == "") return;

		int key = findHash(item);
		if (letterHead[key] == "")
		{
			letterHead[key] = item;
			size++;
		}
		else
		{
			//fix using linear probing
			bool entered = false;
			while (!entered)
			{
				if(key < hashSize)
				{
					key++;
				}else
				{
					key = 0;
				}
				if (letterHead[key] == "")
				{
					letterHead[key] = item;
					size++;
					entered = true;
				}
			}
		}
		
	}
	//insert function to decide what hash to add the new word to.
	void insert(T item)
	{
		if (item[0] == 'a')
		{
			insert(item, hashArr[0]);
		}
		else if (item[0] == 'b')
		{
			insert(item, hashArr[1]);
		}
		else if (item[0] == 'c')
		{
			insert(item, hashArr[2]);
		}
		else if (item[0] == 'd')
		{
			insert(item, hashArr[3]);
		}
		else if (item[0] == 'e')
		{
			insert(item, hashArr[4]);
		}
		else if (item[0] == 'f')
		{
			insert(item, hashArr[5]);
		}
		else if (item[0] == 'g')
		{
			insert(item, hashArr[6]);
		}
		else if (item[0] == 'h')
		{
			insert(item, hashArr[7]);
		}
		else if (item[0] == 'i')
		{
			insert(item, hashArr[8]);
		}
		else if (item[0] == 'j')
		{
			insert(item, hashArr[9]);
		}
		else if (item[0] == 'k')
		{
			insert(item, hashArr[10]);
		}
		else if (item[0] == 'l')
		{
			insert(item, hashArr[11]);
		}
		else if (item[0] == 'm')
		{
			insert(item, hashArr[12]);
		}
		else if (item[0] == 'n')
		{
			insert(item, hashArr[13]);
		}
		else if (item[0] == 'o')
		{
			insert(item, hashArr[14]);
		}
		else if (item[0] == 'p')
		{
			insert(item, hashArr[15]);
		}
		else if (item[0] == 'q')
		{
			insert(item, hashArr[16]);
		}
		else if (item[0] == 'r')
		{
			insert(item, hashArr[17]);
		}
		else if (item[0] == 's')
		{
			insert(item, hashArr[18]);
		}
		else if (item[0] == 't')
		{
			insert(item, hashArr[19]);
		}
		else if (item[0] == 'u')
		{
			insert(item, hashArr[20]);
		}
		else if (item[0] == 'v')
		{
			insert(item, hashArr[21]);
		}
		else if (item[0] == 'w')
		{
			insert(item, hashArr[22]);
		}
		else if (item[0] == 'x')
		{
			insert(item, hashArr[23]);
		}
		else if (item[0] == 'y')
		{
			insert(item, hashArr[24]);
		}
		else if (item[0] == 'z')
		{
			insert(item, hashArr[25]);
		}
		else
		{
			insert(item, hashArr[26]);
		}

	}
	
	//Find function to decide what tree to go into
	bool find(T item)
	{
		if (item[0] == 'a')
		{
			return find(item, hashArr[0]);
		}
		else if (item[0] == 'b')
		{
			return find(item, hashArr[1]);
		}
		else if (item[0] == 'c')
		{
			return find(item, hashArr[2]);
		}
		else if (item[0] == 'd')
		{
			return find(item, hashArr[3]);
		}
		else if (item[0] == 'e')
		{
			return find(item, hashArr[4]);
		}
		else if (item[0] == 'f')
		{
			return find(item, hashArr[5]);
		}
		else if (item[0] == 'g')
		{
			return find(item, hashArr[6]);
		}
		else if (item[0] == 'h')
		{
			return find(item, hashArr[7]);
		}
		else if (item[0] == 'i')
		{
			return find(item, hashArr[8]);
		}
		else if (item[0] == 'j')
		{
			return find(item, hashArr[9]);
		}
		else if (item[0] == 'k')
		{
			return find(item, hashArr[10]);
		}
		else if (item[0] == 'l')
		{
			return find(item, hashArr[11]);
		}
		else if (item[0] == 'm')
		{
			return find(item, hashArr[12]);
		}
		else if (item[0] == 'n')
		{
			return find(item, hashArr[13]);
		}
		else if (item[0] == 'o')
		{
			return find(item, hashArr[14]);
		}
		else if (item[0] == 'p')
		{
			return find(item, hashArr[15]);
		}
		else if (item[0] == 'q')
		{
			return find(item, hashArr[16]);
		}
		else if (item[0] == 'r')
		{
			return find(item, hashArr[17]);
		}
		else if (item[0] == 's')
		{
			return find(item, hashArr[18]);
		}
		else if (item[0] == 't')
		{
			return find(item, hashArr[19]);
		}
		else if (item[0] == 'u')
		{
			return find(item, hashArr[20]);
		}
		else if (item[0] == 'v')
		{
			return find(item, hashArr[21]);
		}
		else if (item[0] == 'w')
		{
			return find(item, hashArr[22]);
		}
		else if (item[0] == 'x')
		{
			return find(item, hashArr[23]);
		}
		else if (item[0] == 'y')
		{
			return find(item, hashArr[24]);
		}
		else if (item[0] == 'z')
		{
			return find(item, hashArr[25]);
		}
		else
		{
			return find(item, hashArr[26]);
		}
	}

	//find function
	bool find(T item, T *letterHead)
	{
		int key = findHash(item);
		if(letterHead[key].compare("") == 0)
                {
                        notFoundComp += compares;
                        return false;
                }
		else if (letterHead[key].compare(item) == 0)
		{
			compares++;
			foundComp += compares;
			return true;
		}
		else
		{
		   return fix(key,letterHead,item);
		}
	}

	bool fix(int key,T *letterHead,T item)
	{
		 //use linearprobing to fix
                 bool found = false;
                        while (!found)
                        {
                                if(key < hashSize)
                                {
                                        key++;
                                }else
                                {
                                        key =0;
                                }
                                if (letterHead[key].compare(item) == 0)
                                {
                                        compares++;
                                        foundComp += compares;
                                        return true;
                                }
                                else if (letterHead[key].compare("") == 0)
                                {
                                        compares++;
                                        notFoundComp += compares;
                                        return false;
                                }
                        }

	}

	//used to delete a node and its children
	 ~myhash()
	{
	    delete[] hashArr;
	}

	int getSize()
	{
		return size;
	}

};
#endif
