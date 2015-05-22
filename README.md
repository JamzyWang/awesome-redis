# Awesome Redis

A curated list of amazingly awesome redis and redis ecosystem resources. Inspired by [Awesome PHP](https://github.com/ziadoz/awesome-php), [Awesome Python](https://github.com/vinta/awesome-python) and [Awesome Sysadmin](https://github.com/kahun/awesome-sysadmin)

- [Awesome Redis](#awesome-redis)
	- [Redis](#redis)
	- [Use Cases](#use-cases)
	- [Redis Client](#redis-client)

- [Resources](#resources)
	- [Websites](#websites)
	- [Presentations](#presentations)
	- [Books](#books)
- [Other Awesome Lists](#other-awesome-lists)

---

## Redis

* [Redis](http://redis.io/) - redis official website
* [Antirez](http://antirez.com/latest/0) - blog of the redis author 
* [Redis News Feed](https://twitter.com/redisfeed) - Redis News Feed

---

## Use Cases

* [Twitter](http://www.infoq.com/presentations/Real-Time-Delivery-Twitter) 
* [Weibo](http://www.infoq.com/cn/presentations/tfl-sina-weibo-platform-redis-practice) 
* [Tumblr](http://highscalability.com/blog/2013/5/20/the-tumblr-architecture-yahoo-bought-for-a-cool-billion-doll.html) 
* [Flickr](http://www.infoq.com/news/2014/08/flickr-sentinel-redis) 
* [Instagram](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html) 
* [Pinterest](http://nosql.mypopescu.com/post/17658415847/polyglot-persistence-at-pinterest-redis-membase) 
* [Youporn.com](http://highscalability.com/blog/2012/4/2/youporn-targeting-200-million-views-a-day-and-beyond.html) 
* [Line](http://developers.linecorp.com/blog/?p=1420) 
* [stackoverflow](http://highscalability.com/blog/2011/3/3/stack-overflow-architecture-update-now-at-95-million-page-vi.html) 
* [Github](https://github.com/blog/530-how-we-made-github-fast)
* [Discourge](https://github.com/discourse/discourse)
* [Digg](http://www.fastcolabs.com/3014663/open-company/inside-the-tech-stack-digg-used-to-replace-google-reader)

---

## Redis-based Queues
* [rq](https://github.com/nvie/rq) - Simple job queues for Python
* [rq-scheduler](https://github.com/zhemingwang/rq-scheduler) - A light library that adds job scheduling capabilities to [rq](https://github.com/nvie/rq)
* [Ost](https://github.com/soveran/ost) - Redis based queues and workers,written in Ruby
* [HotQueue](https://github.com/richardhenry/hotqueue) - a Python library that allows you to use Redis as a message queue within your Python programs.
* [resque](https://github.com/resque/resque) - Resque is a Redis-backed Ruby library for creating background jobs, placing them on multiple queues, and processing them later

* [kue](https://github.com/Automattic/kue) - Kue is a priority job queue backed by redis, built for node.js
* [django-rq](https://github.com/ui/django-rq) - A simple app that provides django integration for [rq](https://github.com/nvie/rq)
* [bull](https://github.com/OptimalBits/bull) - A NodeJS persistent job and message queue based on Redis
* [flask-rq](https://github.com/mattupstate/flask-rq) - [rq](https://github.com/nvie/rq) integration for Flask applications

---

## Redis Client
### C
* [hiredis](https://github.com/redis/hiredis) - This is the official C client. Support for the whole command set, pipelining, event driven programming.

### C#
* [ServiceStack.Redis](https://github.com/ServiceStack/ServiceStack.Redis) - This is a fork and improvement of the original C# client written by Miguel De Icaza.
* [StackExchange.Redis](https://github.com/StackExchange/StackExchange.Redis) - This .NET client was developed by Stack Exchange for very high performance needs (replacement to the earlier BookSleeve).


### C++
* [redis-client for C++](https://github.com/zhengshuxin/acl/tree/master/lib_acl_cpp/include/acl_cpp/redis) - full redis client commands, one redis command one redis function, including STRING, HASH, LIST, SET, ZSET, HLL, PUBSUB, TRANSACTION, SCRIPT, CONNECTION, SERVER, CLUSTER
* [redis3m](https://github.com/luca3m/redis3m) - A C++ wrapper of hiredis, with also connection pooling, high availability and ready-to-use patterns
* [redisclient](https://github.com/nekipelov/redisclient) - A C++ asynchronous client based on boost::asio
* [redox](https://github.com/hmartiro/redox) - Modern, asynchronous, and fast C++11 client for Redis
* [SimpleRedisClient](https://github.com/Levhav/SimpleRedisClient) - Simple Redis client for C++

## Erlang
* [Eredis](https://github.com/wooga/eredis) - Redis client with a focus on performance
* [sharded_eredis](https://github.com/jeremyong/sharded_eredis) - Wrapper around eredis providing process pools and consistent hashing
* [Tideland Erlang/OTP Redis Client](git://git.tideland.biz/errc) - A comfortable Redis client for Erlang/OTP support pooling, pub/sub and transactions.

## Go
* [Radix](https://github.com/fzzy/radix) - MIT licensed Redis client
* [Redigo](https://github.com/jeremyong/sharded_eredis) - Redigo is a Go client for the Redis database with support for Print-alike API, Pipelining (including transactions), Pub/Sub, Connection pooling, scripting

## Haskell
* [hedis](https://github.com/informatikr/hedis) - Supports the complete command set. Commands are automatically pipelined for high performance



### Java
* [Jedis](https://github.com/xetorthio/jedis)
* [Redisson](https://github.com/mrniko/redisson)
* [aredis](http://aredis.sourceforge.net/)
* [JDBC-Redis](http://code.google.com/p/jdbc-redis/source/browse)
* [JRedis](https://github.com/alphazero/jredis)
* [redis-py](https://github.com/andymccurdy/redis-py) 


### Python
* [redis-py](https://github.com/andymccurdy/redis-py) - Redis Python Client




## Top Questions on Stackoverflow
* [Memcached vs. Redis?](http://stackoverflow.com/questions/10558465/memcached-vs-redis)
* [What is Redis and what do I use it for?](http://stackoverflow.com/questions/7888880/what-is-redis-and-what-do-i-use-it-for)
* [How do I delete everything in redis?](http://stackoverflow.com/questions/6851909/how-do-i-delete-everything-in-redis)
* [What are the underlying data structures used for Redis?](http://stackoverflow.com/questions/9625246/what-are-the-underlying-data-structures-used-for-redis) 
* [When to Redis? When to MongoDB?](http://stackoverflow.com/questions/5400163/when-to-redis-when-to-mongodb)
* [How to atomically delete keys matching a pattern using Redis](http://stackoverflow.com/questions/4006324/how-to-atomically-delete-keys-matching-a-pattern-using-redis)
* [Redis command to get all available keys?](http://stackoverflow.com/questions/5252099/redis-command-to-get-all-available-keys)
* [How much faster is Redis than mongoDB?](http://stackoverflow.com/questions/5252577/how-much-faster-is-redis-than-mongodb) 
* [Is memcached a dinosaur in comparison to Redis?](http://stackoverflow.com/questions/2873249/is-memcached-a-dinosaur-in-comparison-to-redis)


# Resources 




## Websites
*Useful websites and articles*

* [Redis weekly](http://redisweekly.com/)



## Presentations

* [Real World Redis](http://www.infoq.com/presentations/Redis-Data-Structure-Library)


## Books

* [Redis in Action](http://www.manning.com/carlson/)
* [The Little Redis Book](http://openmymind.net/2012/1/23/The-Little-Redis-Book/)


# Other Awesome Lists
Other amazingly awesome lists can be found in the [awesome-awesomeness](https://github.com/bayandin/awesome-awesomeness) list.
