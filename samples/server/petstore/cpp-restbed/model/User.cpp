/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.0.3-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "User.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

User::User()
{
    m_Id = 0L;
    m_Username = "";
    m_FirstName = "";
    m_LastName = "";
    m_Email = "";
    m_Password = "";
    m_Phone = "";
    m_UserStatus = 0;
    
}

User::~User()
{
}

std::string User::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Username", m_Username);
	pt.put("FirstName", m_FirstName);
	pt.put("LastName", m_LastName);
	pt.put("Email", m_Email);
	pt.put("Password", m_Password);
	pt.put("Phone", m_Phone);
	pt.put("UserStatus", m_UserStatus);
	write_json(ss, pt, false);
	return ss.str();
}

void User::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", 0L);
	m_Username = pt.get("Username", "");
	m_FirstName = pt.get("FirstName", "");
	m_LastName = pt.get("LastName", "");
	m_Email = pt.get("Email", "");
	m_Password = pt.get("Password", "");
	m_Phone = pt.get("Phone", "");
	m_UserStatus = pt.get("UserStatus", 0);
}

int64_t User::getId() const
{
    return m_Id;
}
void User::setId(int64_t value)
{
    m_Id = value;
}
std::string User::getUsername() const
{
    return m_Username;
}
void User::setUsername(std::string value)
{
    m_Username = value;
}
std::string User::getFirstName() const
{
    return m_FirstName;
}
void User::setFirstName(std::string value)
{
    m_FirstName = value;
}
std::string User::getLastName() const
{
    return m_LastName;
}
void User::setLastName(std::string value)
{
    m_LastName = value;
}
std::string User::getEmail() const
{
    return m_Email;
}
void User::setEmail(std::string value)
{
    m_Email = value;
}
std::string User::getPassword() const
{
    return m_Password;
}
void User::setPassword(std::string value)
{
    m_Password = value;
}
std::string User::getPhone() const
{
    return m_Phone;
}
void User::setPhone(std::string value)
{
    m_Phone = value;
}
int32_t User::getUserStatus() const
{
    return m_UserStatus;
}
void User::setUserStatus(int32_t value)
{
    m_UserStatus = value;
}

}
}
}
}

