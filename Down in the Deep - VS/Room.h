#ifndef ROOM_H
#define ROOM_H

#include <raylib.h>
#include <string>
#include <vector>

class Room
{

	int roomID;
	std::string roomText;

	Texture2D roomSubject;
	Texture2D roomBackground;

	std::vector <std::string> choiceList;
	std::vector <std::string> choiceResultList;
	int roomChoiceNo;

	std::vector <int> roomLinks;


public:
	Room(int roomID,
		 const std::string& roomText,
		 const std::string& subjectPath,
		 const std::string& backgroundPath,
		 const std::vector <std::string>& choiceList,
		 const std::vector <std::string>& choiceResults,
		 const std::vector <int> roomLinks);
	Room();
	Room(const Room& other) = delete;
	Room& operator = (const Room& other);
	Room(Room&& other) noexcept;
	~Room() noexcept;

	const int getRoomID();
	int getChoiceNo();
	int getLink(unsigned int index);


	// Room Drawing Functions
	void drawRoom();// Master
	void drawRoomStory(int boxNumber);// Textbox & Choices
	void roomTextWriter(std::string textIn);



	bool operator < (const Room& rhs) const;
	bool operator > (const Room& rhs) const;
};


#endif
