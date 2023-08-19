#ifndef MESSAGES_HPP
# define MESSAGES_HPP

/*  General messages    */
# define    RPL_WELCOME(client, nick, user, port) ("001 :" + client + " :Welcome to the " + port + " Network, " + nick + "[!" + user + "@" + LOCAL_HOST + "]\r\n")
# define	INVITE(nick, user, name, nickinvite, channel)  (":" + nick + "!" + user + "@" + name + " INVITE " + nickinvite + " " + channel + "\r\n")


/*  USER messages    */
# define    ERR_ALREADYREGISTERED(client) ("462 :" + client + " :You may not reregister\r\n")
# define    ERR_NEEDMOREPARAMS(client, command) ("461 :" + client + " " + command + " :Not enough parametes\r\n")
# define    ERR_PASSWDMISMATCH(client) ("464 :" + client + " :Password incorrect\r\n")
# define    ERR_NONICKNAMEGIVEN(client) ("431 :" + client + " :No nickname given\r\n")
# define    ERR_ERRONEUSNICKNAME(client, nick) ("432 :" + client + " " + nick + " :Erroneus nickname\r\n")
# define    ERR_NICKNAMEINUSE(client, nick) ("433 :" + client + " " + nick + " :Nickname is alreay in use\r\n")
# define    CHANGE_NICKNAME(old_nick, nick) (":" + old_nick + " NICK " + nick + "\r\n")
# define    PERMISSIONDENIED(command) ("ERROR " + command + " :You must provide a valid password using the PASS command before accessing any function\r\n")
# define    ERR_NOSUCHNICKCHANNEL(nick) ("401 :" + nick + " : No such nick\r\n")
// # define    PRIVMSG(nick, user, host, dest, str) (":" + nick + "!" + user + "@" + host + " PRIVMSG " + dest + " :" + str + "\r\n")
# define    PRIVMSG(nick, string) (":" + nick + " PRIVMSG " + " :" + string + "\r\n")
# define    ERR_NOPRIVILEGES(nick) ("481 :" + nick + " :Permission denied- You are not an IRC operator\r\n")
# define    QUIT_WREASON(nick, reason) (nick + " :is exiting the channel, because " + reason + "\r\n")
# define    QUIT_WOREASON(nick) (nick + " : is exiting the channel\r\n")
# define    KILL_WREASON(source, reason) ("You have been disconeected from the server by " + source + ", because " + reason + "\r\n")
# define    KILL_WOREASON(source) ("You have been disconeected from the server by " + source + "\r\n")

/*  Oper messages   */
# define    RPL_YOUREOPER(nick) (nick + " :You are now an IRC operator")

/*  Channel messages    */

# define    ERR_BADCHANMASK(channel) ("476 :" + channel + " :Bad Channel Mask")
# define    ERR_INVITEONLYCHAN(nick, channel) ("473 :" + nick + " " + channel + " :Cannot join channel (+i)")
# define    ERR_NOSUCHCHANNEL(nick, channel) ("403 :" + nick + " " + channel + " :No such channel")
# define	ERR_CHANOPRIVSNEEDED(channel) ("482 :" + channel + " :You're not channel operator\r\n")
# define 	ERR_NOTONCHANNEL(channel) ("442 :" + channel + " :You're not on that channel\r\n")
# define 	ERR_USERONCHANNEL(nick, invitenick, channel) ("443 " + nick + " " + invitenick + " " + channel + ":is already on channel\r\n")
# define	ERR_USERNOTINCHANNEL(nick, channel) ("441 :" + nick + " " + channel + " :They aren't on that channel\r\n")
# define    ERR_CHANNELISFULL(nick, channel) ("471 :" + nick + " " + channel + " :Cannot join channel (+l)\r\n")
# define    ERR_BADCHANNELKEY(nick, channel) ("475 :" + nick + " " + channel + " :Cannot join channel (+k is set and key is incorrect)\r\n")
# define    ERR_KEYSET(channel) ("467 :" + channel + " :Channel key already set\r\n")
# define	RPL_TOPIC(nick, user, name, channel, topic) ("332 :" + nick + "!" + user + "@" + name + " " + channel + " :" + topic + "\r\n")
# define	RPL_NOTOPIC(nick, user, name, channel) ("331 :" + nick + "!" + user + "@" + name + " " + channel + " :No topic is set\r\n")
# define 	RPL_INVITING(nick, user, name, invitenick, channel) ("341 :" + nick + "!" + user + "@" + name + " " + invitenick + " " + channel + "\r\n")
# define    RPL_NAMREPLY(channel, prefix, nick) ("353 =" + channel + " :[" + prefix + "]" + nick + "\r\n")
# define    RPL_ENDOFNAMES(nick, channel) ("366 :" + nick + " " + channel + " :End of /NAMES list\r\n")
# define    CREATEDCHANNEL(channel) (channel + "channel created\r\n")
# define    JOINEDCHANNEL(nick, channel) (nick + " joined " + channel + " channel\r\n")

// # define 	RPL_TOPICWHOTIME(nick, chan, whoset, user, setat) ("333 :" + nick + " " + chan + " " + whoset + "!" + user + "@localhost " + setat + "\r\n")

#endif
