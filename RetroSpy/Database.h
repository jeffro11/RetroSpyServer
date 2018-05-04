/*
    This file is part of RetroSpy Server.

    RetroSpy Server is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    RetroSpy Server is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with RetroSpy Server.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef RETROSPY_DATABASE_H
#define RETROSPY_DATABASE_H

#include "../common/Query.h"

#include <cppconn/driver.h>

class CDatabase
{
public:
	CDatabase();
	~CDatabase();

	bool Connect();
	void Disconnect();

private:
	sql::Driver *m_driver;
	sql::Connection *m_connection;
};

#endif
