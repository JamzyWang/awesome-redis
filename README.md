# Awesome Redis

A curated list of amazingly awesome redis and redis ecosystem resources. Inspired by [Awesome PHP](https://github.com/ziadoz/awesome-php), [Awesome Python](https://github.com/vinta/awesome-python) and [Awesome Sysadmin](https://github.com/kahun/awesome-sysadmin)

- [Awesome Redis](#awesome-redis)
	- [Redis](#redis)
	- [Community](#community)
	- [Tutorial](#tutorial)
	- [Performance Monitoring](#performance-monitoring)
	- [Debugging or Profiling](#debugging-or-profiling)
	- [Logging](#logging)
	- [Use Cases](#use-cases)
	- [Top Questions on Stackoverflow](#top-questions-on-stackoverflow)
	- [Most Stars Project on Github](#most-stars-project-on-github)
	- [Redis based Job Queues](#redis-based-job-queues)
	- [Higher level libraries and tools](#higher-level-libraries-and-tools)
	- [Redis Cheat Sheet](#redis-cheat-sheet)
	- [Redis Hosting](#redis-hosting)
    - [Commandline Tool](#commandline-tool)
	- [Redis Client](#redis-client)
		- [C](#c)
		- [C sharp](#c-sharp)
		- [C++](#c)
	- [Erlang](#erlang)
	- [Go](#go)
	- [Haskell](#haskell)
		- [Java](#java)
		- [Lua](#lua)
		- [Matlab](#matlab)
		- [Node.js](#nodejs)
		- [Objective-C](#objective-c)
		- [Perl](#perl)
		- [PHP](#php)
		- [Python](#python)
		- [Ruby](#ruby)
		- [Rust](#rust)
		- [Scala](#scala)
- [Resources](#resources)
	- [Useful websites and articles](#useful-websites-and-articles)
	- [Presentations](#presentations)
	- [Books](#books)
	- [Courses](#courses)
- [Certifications](#certifications)
- [Other Awesome Lists](#other-awesome-lists)

---
## Redis
* [Redis](http://redis.io/) - redis official website
* [Antirez](http://antirez.com/latest/0) - blog of the redis author
* [Documentation](http://redis.io/documentation)
* [Redis Comands](http://redis.io/commands) - The full list of commands implemented by Redis, along with thorough documentation for each of them
* [FAQ](http://redis.io/topics/faq) - Some common questions about Redis.

---
## Community
* [mailing list](http://groups.google.com/group/redis-db)
* [Freenode webchat](http://webchat.freenode.net/?channels=redis)
* [London Redis Meetup Group](http://www.meetup.com/Redis-London)
* [San Francisco Meetup Group](http://sfmeetup.redis.io/)

---
## Tutorial
* [10-quick-tips-about-redis](http://objectrocket.com/blog/how-to/10-quick-tips-about-redis)
* [Redis: Zero to Master in 30 minutes](http://openmymind.net/2011/11/8/Redis-Zero-To-Master-In-30-Minutes-Part-1/)
* [Lua: A Guide for Redis Users](https://www.redisgreen.net/blog/intro-to-lua-for-redis-programmers/)
* [Redis - Quick Guide](http://www.tutorialspoint.com/redis/redis_quick_guide.htm)
* [Introduction to Redis data types](http://redis.io/topics/data-types-intro) - This is a good starting point to learn the Redis API and data model.
* [Redis Cluster](https://redis.io/topics/cluster-tutorial) - a gentle introduction and setup guide to Redis Cluster
* [Top 10 Redis Interview Questions](http://career.guru99.com/top-10-redis-interview-questions/)
* [Using Redis as a temporary cache for data shared by multiple independent processes](http://dev.mensfeld.pl/2011/11/using-redis-as-a-temporary-cache-for-data-shared-by-multiple-independent-processes/)

---
## Performance Monitoring
* [RedisLive](https://github.com/nkrode/RedisLive) - Visualize your redis instances, analyze query patterns and spikes.
* [redmon](https://github.com/steelThread/redmon) - A web interface for managing redis: cli, admin, and live monitoring
* [redis-stat](https://github.com/junegunn/redis-stat) -  A real-time Redis monitoring tool
* [redispapa](https://github.com/no13bus/redispapa) - another redis monitor by using flask, angular, socket.io
* [django-redisboard](https://github.com/ionelmc/django-redisboard) - Redis monitoring and inspection tool in django admin
* [redis-faina](https://github.com/facebookarchive/redis-faina) - A query analyzer that parses Redis' MONITOR command for counter/timing stats about query patterns
* [Migrator](https://github.com/microredis/migrator) - A golang script which can be distributed as a binary to migrate data from one redis service to another on the fly

---
## Debugging or Profiling
* [redis-lua-debugger](https://github.com/RedisLabs/redis-lua-debugger) - A Redis Lua script for debugging Redis Lua scripts
* [Redis debugging guide](http://redis.io/topics/debugging) - official Redis debugging guide


---
## Logging
* [SLOWLOG subcommand](http://redis.io/commands/slowlog) - official command
* [python-redis-log](https://github.com/jedp/python-redis-log) - A Python logging handler that publishes to redis pub/sub channels
* [Redis Logging](https://www.drupal.org/project/redislog) - Redis logging provides a logging backend for the Redis key-value store, as well as a dblog-like user interface to view watchdog entries.
* [nginx redislog module](http://www.binpress.com/app/nginx-redislog-module/998) - This is a high-performance nginx module for logging http requests into Redis database.
* [logstash](http://logstash.net/docs/1.2.2/tutorials/getting-started-centralized)



---
## Use Cases

* [Twitter](http://www.infoq.com/presentations/Real-Time-Delivery-Twitter) - Real-Time Delivery Architecture at Twitter
* [Twitter](http://highscalability.com/blog/2014/9/8/how-twitter-uses-redis-to-scale-105tb-ram-39mm-qps-10000-ins.html) - How Twitter Uses Redis To Scale
* [Weibo](http://www.infoq.com/cn/presentations/tfl-sina-weibo-platform-redis-practice)
* [Tumblr](http://highscalability.com/blog/2013/5/20/the-tumblr-architecture-yahoo-bought-for-a-cool-billion-doll.html)
* [Flickr](http://www.infoq.com/news/2014/08/flickr-sentinel-redis)
* [Instagram](http://highscalability.com/blog/2011/12/6/instagram-architecture-14-million-users-terabytes-of-photos.html)
* [Pinterest](http://nosql.mypopescu.com/post/17658415847/polyglot-persistence-at-pinterest-redis-membase)
* [Youporn.com](http://highscalability.com/blog/2012/4/2/youporn-targeting-200-million-views-a-day-and-beyond.html)
* [Line](http://developers.linecorp.com/blog/?p=1420)
* [stackoverflow](http://highscalability.com/blog/2011/3/3/stack-overflow-architecture-update-now-at-95-million-page-vi.html)
* [Github](https://github.com/blog/530-how-we-made-github-fast)
* [Discourse](https://github.com/discourse/discourse)
* [Digg](http://www.fastcolabs.com/3014663/open-company/inside-the-tech-stack-digg-used-to-replace-google-reader)
* [Writing a simple Twitter clone with PHP and Redis](http://redis.io/topics/twitter-clone) - Design and implementation of a simple Twitter clone using PHP and the Redis key-value store
* [bloom-redis](https://www.npmjs.com/package/bloom-redis) -  a simple redis-backed bloom-filter
* [Auto complete with Redis](http://autocomplete.redis.io/) - The full list of commands implemented by Redis, along with thorough documentation for each of them
* [Using Redis as an LRU cache](http://redis.io/topics/lru-cache) - How to configure and use Redis as a cache with a fixed amount of memory and auto eviction of keys.
* [reds](https://github.com/tj/reds) - light-weight, insanely simple full text search module for node.js - backed by Redis
* [URL Shortener Service Using Redis](http://sunilarora.org/url-shortener-service-using-redis/) - simple URL Shortener Service Using Redis



---
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


---
## Most Stars Project on Github
* [resque](https://github.com/resque/resque) - Resque is a Redis-backed Ruby library for creating background jobs, placing them on multiple queues, and processing them later.
* [node_redis](https://github.com/mranney/node_redis) - redis client for node
* [twemproxy](https://github.com/twitter/twemproxy) - A fast, light-weight proxy for memcached and redis
* [redis-py](https://github.com/andymccurdy/redis-py) - Redis Python Client
* [kue](https://github.com/Automattic/kue) - Kue is a priority job queue backed by redis, built for node.js.
* [codis](https://github.com/wandoulabs/codis) - redis cluster powered by go
* [ssdb](https://github.com/ideawu/ssdb) - SSDB - A fast NoSQL database, an alternative to Redis
* [jedis](https://github.com/xetorthio/jedis) - A blazingly small and sane redis java client
* [redis-rb](https://github.com/redis/redis-rb) - A Ruby client library for Redis
* [Balloons.IO](https://github.com/rickyrauch/Balloons.IO) - Balloons.IO is a web multi-room chat server and client ready to use. It’s built with the help of node.JS, Express, Socket.IO and Redis
* [predis](https://github.com/nrk/predis) - Flexible and feature-complete PHP client library for Redis



---
## Redis based Job Queues
* [rq](https://github.com/nvie/rq) - Minimalistic Python task queue. Supports only Redis. (Python)
* [restmq](https://github.com/gleicon/restmq) - REST/JSON/HTTP based message queue
* [resque](https://github.com/resque/resque) - Resque is a Redis-backed Ruby library for creating background jobs, placing them on multiple queues, and processing them later. (Ruby)
* [rq-scheduler](https://github.com/ui/rq-scheduler) - A light library that adds job scheduling capabilities to [rq](https://github.com/nvie/rq)
* [Ost](https://github.com/soveran/ost) - Redis based queues and workers. (Ruby)
* [HotQueue](https://github.com/richardhenry/hotqueue) - a Python library that allows you to use Redis as a message queue within your Python programs.
* [kue](https://github.com/Automattic/kue) - Kue is a priority job queue backed by redis, built for node.js
* [django-rq](https://github.com/ui/django-rq) - A simple app that provides django integration for [rq](https://github.com/nvie/rq)
* [bull](https://github.com/OptimalBits/bull) - A NodeJS persistent job and message queue based on Redis
* [flask-rq](https://github.com/mattupstate/flask-rq) - [rq](https://github.com/nvie/rq) integration for Flask applications
* [Celery](https://github.com/ask/celery) - Python task queue. Supports multiple backends. (Python)
* [redis-smq](https://github.com/weyoss/redis-smq) - A simple high-performance Redis message queue for Node.js.

---
## Higher level libraries and tools
* [Fnordmetric](https://github.com/paulasmuth/fnordmetric) - Redis/ruby-based realtime Event-Tracking app. (Ruby)
* [Ohm](https://github.com/soveran/ohm) - Object-hash mapping library for Redis. (Ruby)
* [Kombu](https://github.com/celery/kombu) -Python AMQP Framework with redis support (Python)
* [Sider](https://github.com/dahlia/sider) - Python persistent object library based on Redis. (Python)
* [Redis-objects](https://github.com/nateware/redis-objects) - Map Redis types directly to Ruby objects. (Ruby)
* [Redis-rdb-tools](https://github.com/sripathikrishnan/redis-rdb-tools) - Parse Redis dump.rdb files, Analyze Memory, and Export Data to JSON (Python)
* [Rdb-parser](https://github.com/pconstr/rdb-parser) - node.js asynchronous streaming parser for redis RDB database dumps. (Javascript)
* [Redis-sync](https://github.com/pconstr/redis-sync) - A node.js redis replication slave toolkit (Javascript) (Javascript)
* [Meerkat](http://carlhoerberg.github.com/meerkat/) - Rack middleware for Server Sent Events with multiple backends. (Ruby) (Javascript)
* [Redis-sampler](https://github.com/antirez/redis-sampler) - Sample a Redis DB to understand dataset composition. (Ruby)
* [Recommendify](https://github.com/paulasmuth/recommendify) - Ruby/Redis based recommendation engine (collaborative filtering). (Ruby)
* [Redis-store](https://github.com/jodosha/redis-store) - Namespaced Rack::Session, Rack::Cache, I18n and cache Redis stores for Ruby web frameworks. (Ruby)

* [Redsmin](https://www.redsmin.com) - a developer oriented online administration and monitoring service for Redis and Redis cluster. Redsmin is trusted by more than 10K developers world-wide and manage thousands of Redis servers in real-time.
* [RedisManager](https://github.com/giuseppesalvo/RedisManager) - Simple Mac Application to manage Redis Server
* [Redmon](https://github.com/steelThread/redmon) - A web interface for managing redis: cli, admin, and live monitoring. (Ruby)
* [RedisWebManager](https://github.com/OpenGems/redis_web_manager) - Web interface that allows you to manage easily your Redis instance (Ruby)

* [Rollout](https://github.com/jamesgolick/rollout) - Conditionally roll out features with redis. (Ruby)
* [Webdis](https://github.com/nicolasff/webdis) - 	A Redis HTTP interface with JSON output. (C)
* [Soulmate](https://github.com/seatgeek/soulmate) - Redis-backed service for fast autocompleting. (Ruby)
* [Redis_failover](https://github.com/ryanlecompte/redis_failover) - Redis Failover is a ZooKeeper-based automatic master/slave failover solution for Ruby. (Ruby)
* [Redis-dump](https://github.com/delano/redis-dump) - Backup and restore your Redis data to and from JSON. Warning: alpha code. (Ruby)
* [Sidekiq](http://mperham.github.com/sidekiq/) - Simple, efficient message processing for your Rails 3 application. (Ruby)
* [Soulmate](https://github.com/seatgeek/soulmate) - Redis-backed service for fast autocompleting. (Ruby)
* [Omhiredis](http://www.rsyslog.com/doc/build_from_repo.html) - redis output plugin for rsyslog (rsyslog dev, and rsyslog head). (C)
* [Mod_redis](https://github.com/sneakybeaky/mod_redis) - An Apache HTTPD module for speaking to redis via HTTP (C)
* [leaderboard](https://github.com/agoragames/leaderboard) - Leaderboards backed by Redis. (Ruby)
* [Redis-rdb](https://github.com/nrk/redis-rdb) - A set of utilities to handle Redis .rdb files with Ruby. (Ruby)
* [Lua-ohm](https://github.com/slact/lua-ohm) - Lua Redis Object-hash-mapping and more (Lua)
* [PHP-Resque](https://github.com/chrisboulton/php-resque) -Port of Resque to PHP. (PHP)
* [phpRedisAdmin](https://github.com/ErikDubbelboer/phpRedisAdmin) - phpRedisAdmin is a simple web interface to manage Redis databases. (PHP)
* [HighcoTimelineBundle](https://github.com/stephpy/TimelineBundle) - TimelineBundle is a Bundle which works with Symfony 2.* which provides a timeline for a subject as Facebook can do. (PHP)
* [Stdnet](https://github.com/lsbardel/python-stdnet) - Redis data manager with advanced query and search API. (Python)
* [Retools](https://github.com/bbangert/retools) - Caching and locking helper library. (Python)
* [Distributed locks with Redis](http://redis.io/topics/distlock) - Distributed locks are a very useful primitive in many environments where different processes require to operate with shared resources in a mutually exclusive way.
* [Redis-tools](https://github.com/salimane/redis-tools) - Generate the Redis protocol, in raw format, in order to use 'redis-cli --pipe' command to massively and quickly insert/delete.... keys in a redis server. (Python)
* [Redis-cluster-tool](https://github.com/deep011/redis-cluster-tool) - redis-cluster-tool is a convenient and useful tool for redis cluster. It was primarily built to manage the redis cluster. (C)
* [Rump](https://github.com/stickermule/rump) - Hot-sync two Redis servers using dumps



---
## Redis Cheat Sheet
* [cheat sheet](https://masonoise.files.wordpress.com/2010/03/redis-cheatsheet-v1.pdf) -pdf reference with fine layout
* [cheat sheet](http://www.cheatography.com/tasjaevan/cheat-sheets/redis/) - Online or printable function reference for Redis.


---
## Redis Hosting
* [linode](https://www.linode.com/docs/databases/redis/)
* [redisgreen](http://www.redisgreen.net/) - With 24/7 Monitoring and Professional Support.
* [redislabs](https://redislabs.com/) -Great apps. Big performance. Little effort
* [openredis](https://openredis.com/) - offer dependable Redis™ hosting
* [redis to go](http://redistogo.com/) - simple redis hosting
* [redis4you](http://redis4you.com/) - offering Redis hosting
* [openredis](https://addons.heroku.com/openredis) - Dependable Redis Hosting
* [rackspace](http://www.rackspace.co.uk/objectrocket/redis) - safe, scalable and supported
* [scalechamp](http://www.scalechamp.com/redis/) - Managed Redis as a Service provided by ScaleChamp on AWS, Hetzner, Azure, Linode, IBM, Scaleway, Alibaba Cloud, DigitalOcean, GCP, UpCloud, Vultr


---
## Commandline Tool

* [iredis](https://github.com/laixintao/iredis) - Interactive Redis: A Terminal Client for Redis with AutoCompletion and Syntax Highlighting.


---

## Redis Client

### C
* [hiredis](https://github.com/redis/hiredis) - This is the official C client. Support for the whole command set, pipelining, event driven programming.

### C sharp
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
* [Redigo](https://github.com/gomodule/redigo) - Redigo is a Go client for the Redis database with support for Print-alike API, Pipelining (including transactions), Pub/Sub, Connection pooling, scripting
* [go-redis](https://github.com/go-redis/redis) - Type-safe Redis client for Golang

## Haskell
* [hedis](https://github.com/informatikr/hedis) - Supports the complete command set. Commands are automatically pipelined for high performance


### Java
* [Jedis](https://github.com/xetorthio/jedis)
* [Redisson](https://github.com/mrniko/redisson) - distributed and scalable Java data structures on top of Redis server
* [aredis](http://aredis.sourceforge.net/) - Asynchronous, pipelined client based on the Java 7 NIO Channel API
* [RedisClient](https://github.com/caoxinyu/RedisClient)redis client GUI tool

### Lua
* [redis-lua](https://github.com/nrk/redis-lua)

### Matlab
* [redis-octave](https://github.com/markuman/redis-octave) - A Redis client in pure Octave

### Node.js
* [ioredis](https://github.com/luin/ioredis) - A delightful, performance-focused and full-featured Redis client. Supports Cluster, Sentinel, Pipelining and Lua Scripting
* [node_redis](https://github.com/mranney/node_redis) - Recommended client for node

### Objective-C
* [ObjCHiredis](https://github.com/lp/ObjCHiredis) - Static Library for iOS4 device and Simulator, plus Objective-C Framework for MacOS 10.5 and higher

### Perl
* [Redis](https://github.com/melo/perl-redis) - Perl binding for Redis database
* [Redis::hiredis](http://search.cpan.org/dist/Redis-hiredis/) - Perl binding for the hiredis C client
* [AnyEvent::Hiredis](https://github.com/wjackson/AnyEvent-Hiredis) - Non-blocking client using the hiredis C library

### PHP
* [phpredis](https://github.com/phpredis/phpredis) - This is a client written in C as a PHP module
* [Predis](https://github.com/nrk/predis) - Mature and supported
* [redis-async](https://github.com/swoole/redis-async) - Asynchronous redis client library for PHP


### Python
* [redis-py](https://github.com/andymccurdy/redis-py) - Redis Python Client

### Ruby
* [redis-rb](https://github.com/redis/redis-rb) - Very stable and mature client. Install and require the hiredis gem before redis-rb for maximum performances

### Rust
* [redis-rb](https://github.com/mitsuhiko/redis-rs) - A high and low level client library for Redis tracking Rust nightly

### Scala
* [scala-redis](https://github.com/debasishg/scala-redis) - Apparently a fork of the original client from @alejandrocrosa


---
# Resources
---
## Useful websites and articles
* [Redis News Feed](https://twitter.com/redisfeed)
* [Redis Package](https://www.npmjs.com/search?q=redis)
* [Redis Wikipedia Article](http://en.wikipedia.org/wiki/Redis)
* [Redis网络资料汇总(Chinese)](http://www.redis.cn/article.html)
* [Redis Cheat Sheet](http://www.cheatography.com/tasjaevan/cheat-sheets/redis/) - Online or printable function reference for Redis.
* [Redis(Chinese)](https://github.com/springside/springside4/wiki/redis)
* [Redis Command Reference(Chinese)](http://redisdoc.com/index.html)
* [redis-3.0-annotation(Chinese)](https://github.com/huangz1990/redis-3.0-annotated)
* [A Collection Of Redis Use Cases](http://www.paperplanes.de/2010/2/16/a_collection_of_redis_use_cases.html)

## Presentations
* [Real World Redis](http://www.infoq.com/presentations/Redis-Data-Structure-Library)
* [wooga’s architecture: Facebook Games on MySQL and Redis](http://nosql.mypopescu.com/post/4788119911/woogas-architecture-facebook-games-on-mysql-and)
* [Redis And python](http://www.slideshare.net/sunilar0ra/redis-and-python-at-pycon2011)
* [Redis 101](https://zh.scribd.com/doc/33531219/Redis-Presentation)


---
## Books
* [Redis in Action](http://www.manning.com/carlson/)
* [Redis: The Definitive Guide](http://shop.oreilly.com/product/0636920014294.do)
* [The Little Redis Book](http://openmymind.net/2012/1/23/The-Little-Redis-Book/)
* [Redis Cookbook](http://shop.oreilly.com/product/0636920020127.do)
* [Instant Redis Optimization How-to](http://www.wrox.com/WileyCDA/WroxTitle/Professional-NoSQL.productCd-047094224X.html)
* [Instant Redis Persistence ](http://www.packtpub.com/redis-persistence/book)
* [Seven Databases in Seven Weeks](https://pragprog.com/book/rwdata/seven-databases-in-seven-weeks)
* [Mining the Social Web](http://shop.oreilly.com/product/0636920010203.do)

---
## Courses
* [Redis University](https://university.redislabs.com/)

---
## Certifications
* [Redis Certified Developer](https://university.redislabs.com/certification/)

---
# Other Awesome Lists
Other amazingly awesome lists can be found in the [awesome-awesomeness](https://github.com/bayandin/awesome-awesomeness) list.
