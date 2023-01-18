#pragma once
ref class Player
{
public:
	inline void SetFirstName(char* firstName) { this->m_FirstName = firstName; }
	inline char* GetFirstName() { return this->m_FirstName; }

	inline void SetLastName(char* lastName) { this->m_LastName = lastName; }
	inline char* GetLastName() { return this->m_LastName; }
private:
	char* m_FirstName;
	char* m_LastName;
};

