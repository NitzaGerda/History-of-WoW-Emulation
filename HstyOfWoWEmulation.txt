01 - Ancient History

It all began with Skull’s wish to get his hands on World of Warcraft Alpha, which was purely internal and wasn’t supposed to get out of Blizzard itself. He tried to form a team to hack into Blizzard’s servers and grab the client that way. There were multiple problems with this however as he soon discovered. It is rumored that eventually he made a contact inside of Blizzard and got the client from them. It was never told how and exactly when, but it was out…

This message was posted nearly everywhere…

Open-source proponents, crackers, and anarchists alike rejoice as an alpha version of World of Warcraft has allegedly been secured and is now supposedly making its way around warez circles. This news comes from Skull’s Hack Site who says WarForge (infamous for their work in battle.net emulation for the War3 and TFT betas) is already working on server software for the WoW leak.

Availability for those outside of cracking groups is limited at best and the situation has just now grown past rumor, but details and screenshots can be found here and here if you wish to judge for yourself.

After this message the Alpha client started to spread thought torrents. People have been getting in great quantities, but there was no server to play on.

Blizzard’s response on leaking Alpha client…

As many of you know, we are currently conducting an internal Alpha test for World of Warcraft. Our goal for this Alpha test is to provide the best possible experience for players when the Beta launches in early 2004.

In order to accelerate the testing process, we recently allowed a small group of external testers to play the game. During this process, a collection of files was leaked to the Internet. While these files contain alpha content from the game, they are not fully playable and therefore do not convey the experience that World of Warcraft will provide when it is released.

We are currently investigating this matter and will take serious action against those involved. As always, we appreciate the interest and enthusiasm that players around the world have for World of Warcraft, and we look forward to delivering a massively multiplayer game unlike any you have ever experienced. Until then, we ask that you refrain from sharing any content that doesn’t come directly from Blizzard Entertainment.

At that time Lax started to reverse engineer World of Warcraft client with just few packet logs, it wasn’t possible to get all the features packetlogged, since there was not public Blizzard server for Alpha then he used just logs which was available in source from Alpha. He managed to code unnamed Sandbox (later released by ColdIce as StormCraft Sandbox). It was in essence an emulated server that allowed you to run around the world and explore, and there were some videos released of people running around as a character named Lax. The sandbox basically just spit the login and world entry info from those captures at the client, nothing entirely special.

Once the sandbox was released, he immediately began creating the StormCraft “Town Hall” server software. He spent a week or two developing the architecture for the server and designing how it would work. Lax kept developing that for a while and once he got the architecture ready, the team joined in for development, to start coding all the spells, pathfinding… During this time, some others released their own sandboxes and started emulating servers, but Town Hall was clearly more advanced than the others at the time. We had some public tests on ColdIce’s server hardware (http://www.stormcraft.nl) with something like 200 users at a time, all in the same little spot in the world.

Generin’s Abyss was based on the StormCraft sandbox and also from packet captures he got from Town Hall, and then he was able to start adding new stuff via the reverse engineering of WoW. But he joined StormCraft since half of his team went AWOL or something. Basically, StormCraft led the way and the others used captures from their server to implement their new features, at least at the time. So Generin, _Psycho, TheUndying, TheDamned, Alita, Cain continued to work on Lax’s work and developed emulator. It was named StormCraft and became most famous emulator of all the time (in positive way, unlike WOWEmu). Codemonkey helped them too, as he had more intimate knowledge of the WoW executable, which allowed implementation of things for what weren’t packet captures available (Taxi nodes and so). Then Lax suddenly went back to work on MacroQuest 2 and handed his work to dedicated devs who wanted to continue his code. It was a good start and he will never be forgotten.

Interview with Lax

Nivelo: How did it all really happened with you? I mean how did you meet Skull and so on?
Lax: Well, I followed WoW for a while waiting for the beta. I don’t remember how I ended up meeting Skull actually. All I remember is he put the Alpha and some packet captures in my hands, and I went to town :)

Nivelo: You went to town with few packets and alpha and made a miracle of first sandbox, right?
Lax: The sandbox itself was pretty basic stuff, all it took was figuring out how to make it use the sandbox as the wow server, and having the sandbox give the wow client exactly what it saw from the packet captures then we had to actually figure out what everything in the packets meant, so we could do more fun stuff with emulating the server. Me and like 5 other people picked through the packet captures to figure all that out. It was a lot easier having the alpha client, because we could go through it and find the names of all the packets, and basically what they were supposed to contain, then it was just a matter of starting up the server about a million times to test little things :-) We formed the team basically while I was working on the sandbox, so they mostly just waited for me to get the architecture done. Then, once that was done I let them in on the source code to start developing.

Nivelo: What was the plans for Stormcraft?
Lax: Basically we wanted to have a private server that could handle some number of people. The plan was to do it in a few major steps. The first step was to create our basic testbed, and we planned for it to handle maybe 100 users at a time, but then we would plan our next server with everything we learned, to handle maybe 500. I didn’t want to distribute the source or even the server for other people to run, because it’s kind of dumb to have a few hundred servers with 5 people on each. I’d rather see one with 500 people on it.

Nivelo: How old were you when you started to work on it and how long did you work on SC?
Lax: I was 23 when I started and I worked on it for probably 1-2 months before I went back to working on MacroQuest.

Nivelo: Have you ever thought about getting back?
Lax: Not for emulation. For modding, hacking and so, more along those lines. I stick to the legal stuff :) well, wasn’t a big loss to me, I would rather be on their server development team instead. I did send them my resume with the StormCraft project listed a while back :) Well, it’s interesting to watch but not really my thing anymore you know :)

Nivelo: How did it end up? Were you accepted?
Lax: No, they send applicants a postcard which says if they’re interested they’ll contact you in 2 weeks, and I didn’t get contacted. Even if they were, I probably wouldn’t accept the job. I wouldn’t expect them to pay enough money to pull me away from my company.

Nivelo: Do you know you are really wanted back there?
Lax: I’m sure I am, but I’m not really interested in emulating now. I run a legitimate business and I’m no longer anonymous, so it’s not really an option anyway.

Nivelo: So you really never quit toying with WoW.
Lax: Well, I played it in beta and in retail, and it’s not that I toy with WoW, but the software I write has to hide from Warden and protect others programs from Warden.

Nivelo: What did you move forward to in your life?
Lax: Well, I went back to MacroQuest, which is basically for botting EverQuest 1, and I started taking donations for that, then I started up some other projects relating to EQ1, after I saw how people were willing to donate to my projects, I turned that into my company, Lavish Software. So now I do that same kind of thing but for any DirectX game instead of just EQ1.

Spacey’s prophecy

…Once upon a time there was Lax…
…The father of WoW emulation…
…he said let there be code…
…and then it was created…
…the World of Warcraft emulation scene…
…2 years have passed since the mortal races banded together to emulate World of Warcraft…
…But the alliances have been broken and the drums of flaming thunders once again…



02 - Golden Age

sticker

Welcome to GotWoW.Net everyone, the new home of Skull’s Hack Site and Team Stormcraft. Forums will be getting a new template within the next few days, and with the new template for the forums, the frontpage will be also.

This was the GotWoW glory days! Everybody tried to help each other to connect to the Stormcraft server and other teams started to show up…

In first few weeks of February, Stormcraft managed to release spell database extracted from Alpha client (It had to be taken down 14 days later because of Blizzard’s first attack) and launched public server together with releasing nifty program (StormCraftWoW Login/Loader) which helped to connect to the realm.

Thanks to web.archive.org for still keeping it online

Spell Database

Time flown and more and more subdomains rose on GotWoW. Some of them were striked hard by Blizzard; others lasted until the very end of GotWoW’s days.

WoW Places (http://wowplaces.gotwow.net)
Owner: wolk
The website introducing WOW, it has contained pictures from every place in the World of Warcraft; it contained even MP3’s from alpha client in the beginning. But unlucky, because of so called copyright infringement it was soon attacked by Blizzard, forced to take down pictures and mp3s. Site remained unchanged until the sudden day arrived. It was updated with new locations as the beta went on.

Technetium (C++)(http://tech.gotwow.net)
Owner: xccmx
It was technically targeted website which played around with BLP2 format as long as was up. Release of BLP2 to TGA and TGA to BLP2 converter for manipulation with textures was done in here.

VJeux tools (C++) (http://vjeux.gotwow.net)
Owner: VJeux
Website of a loader which listed all the alpha and beta servers and allowed connection (since wasn’t that easy to connect to private servers as nowadays (today’s http://www.wowstatus.net). VJeux himself after GotWOW’s dead moved to work for thottbot and later to Cosmos UI (since he was awesome with LUA) and produces it for you :)

Rift (Visual Basic) (http:/ /rift.gotwow.net)
Owner: AlexM
One man team AlexM loved Visual Basic and wanted to prove that you can have a fast and stable server coded in it. He managed to get chat working and entering the world and spawning creatures. But people who entered couldn’t see each other. XmD was his secondary host BTW :)

Future WoW (Delphi) (http://fwow.gotwow.net)

Owner: Stanz
Originally started by Stanz and coded in Delphi. He had quit number of features working. He made a tower of tables making look like the WTC. Then Larael came up and rewrote the whole core making it more stable and even adding more features. Stanz’s goal was not to update with client but to get a more functional WOW. It was all the way private and sources weren’t released, that’s why so few things are known about it. In the beginning of 2006 new wave of interest came up to this emulator. Something is on the move, but no one can tell what it really is :-)
Everything went really well, but people are often changing their minds in what to do. In this spirit AlexM abandoned Rift and joined FWoW to help Stanz & Larael. But ever since Larael was busy with university, he left. Two-manned team continued to work on FWoW.
With his leaving, AlexM handed Rift down to CMA, Finrael, and yonur. Their progress became unknown.

Stanz said on this topic

In the stages where FWoW was abandoned, it was due for a re-write of the core. Without re-writing the core, it would not be powerful enough to efficiently handle advanced features. FWoW had a lot of potential, but due to me abandoning it at this point, I’m afraid the FWoW source would not be of much use to anyone.
…
FWoW for me was an amazing project to work on. I enjoyed working on it, as did my coding partner. What put me off is that, now all emulation seems to be based around “I don’t want to buy WOW, let me play free!” which is not the same community that I started with (Alpha/Beta times).

Team Python (C++) (http://www.teampython.com)
Team Members: Addictman, Battyone, DeathCheese, Deten, don, FreXX, Hedos, Jedite, jimmy, Munky, page_420, RandomGuy, tmm`, WantedMan, angelic666, c0mputar

They coded it from scratch and had a lot of fun features. They were still in private testing for now, although they allowed their stress test team to play later on (but still private was disliked by some http://www.gotwow.ic.cz/files/WoWBetaUsPhase3.nfo) even later, they released sources and became open-source. Features included: Vendors, Mounts, Items, Combat, Time Changes, Gryphon Flying, Very Few Spells (2 to be exact :p) and many more GM commands. It was continued many times after (WSD, WOWD) as it was one of few open-sourced emulators out there.

Expect a big update at WOWPython as I’ve been contacted by c0mputar and he gave me precise version of Team Python’s history :)

Team 0×90 (C#)
Team: Foole and Scar
The 0×90 Prototype server is developed solely by Foole. It started out as a testing ground for the main server, but now is the only working server. The main server, coded in C++, has falling behind in updates and is no longer used. Some instances of Foole’s prototype server are Hybby’s server (Canada), Rewot’s server (Bulgaria) and Scar Server. Features were chat, parties, mobs, and combat. There is a bug preventing items from being sold. Foole also had a forum and posted a bunch of packet analysis of Beta 1.

Warforge (C++)
Team: Daxxar, Pasn, Trivex, Xetrov`, Archang3l, Warren,[pez]
There is not much info, since they were private, remained private all the time, and died private handing sources to Blizzard.

Khaos (C#)
Team: DMod, forbidden, DesIrae
Khaos features: multi-core server (login, realmlist, world servers - Kalimdor and Azeroth) enter world, movement, creatures, custom item databases, flight paths, death world, quests, combat system, they were all-time private and unlucky was brought down before they went public.

Interview with DMod

XmD: Any story on how it has started?
DMod: At the time I was helping a lot of new coders get started, and was GMing for SC when forbidden was creating the best loader for the SC servers, I helped him with some coding problems with updating realm-list status’s and he told me about a project he was working on - a private server. I joined up then met the best coder I ever knew - DesIrae - In a week we already surpassed what most teams have been working months on (in part because we had 3 beta accounts). We coded in C# completely from scratch :-) (all other C# teams used WOWDaemon code). DesIrae would work on the code like 24/7 so our features (very very stable ones) would skyrocket in no time, so we kept quiet other than our forums and webpage (http://www.realmsofkhaos.net)

XmD: What happened to your team and what did you move on to?
DMod: I moved on to nothing - because I have a lengthy 11 page settlement agreement restricting me. I can’t speak of the details. But it pretty much limited me from doing anything. DesIrae after heeding my warning left the scene completely and decided to stay unknown and forbidden went on to be a founding member of nemesis studios indie game development.

XmD: How did it all end?
DMod: It ended when Blizzard came to my house and forced me to turn over code :-P

XmD: You must really hate blizz, right?
DMod: Not really, they were really nice to me, just doing their job. They also offered me a job after university, and I got a reduced subscription to the game for “hacking” retail to find exploits. Can’t say I wouldn’t have went after myself if I was Blizzard.

XmD: So how do you like the lore?
DMod: Pretty good read, though I just skipped past anything after GotWOW? went down, because those teams are a joke :P In earlier days, people rev.engineered Blizzard because it was only beta and everyone wanted to get a chance to play beta, but now its just to play not to pay.

EWoW #1 AKA Great scam (HOAX)
Coder (scammer): Astrobilis (or something like that)
It was instant 100% copy of Blizzard’s server. He did stress tests with imaginary or inactive people from forums monthly and people fell for that. Great numbers of people believed him. Then at one point he said if others want him to continue he will need some closed beta accounts. (NOTE: What do you need closed beta accounts for 100% complete Blizz-like server???). People fell for it again. GotWoW community warned everyone and did not support that team but in the end, everyone who gave their closed beta accounts, got stabbed in the face as website got shutdown and great scammer was gone for good with a bunch of beta accounts.

So around then only these teams existed until Coldice joined StormCraft and caused a huge clash between team members and ruin the whole team so SC basically died. YES they were announced DEAD (second time after Lax).

WoWMaelstrom
Team: foole, scarmaelstrom, tharaxis
Emulator buried deep on SourceForge, no info at all… just description…

SourceForge has this to tell

A server emulator for World of Warcraft, providing the ability for individuals to create their own realms, customised through an easy-to-use C# scripting system, allowing one to create AI, items, quests, and any other in-game functions with ease.

New Teams formed on the go:
EX3 (C++)
Team: Fr3DBr, Nicoli_s, Republicola, and A9Master (SilentAvenger), Eggy
Fr3DBr talked to Generin to obtain the source code of his project and continue developing it. After some time Nicoli_s decided to give the project a public name “Abyss-X” since we were based in Abyss-X code. But as time elapsed they had to get new Dev’s to help with the project. The new Dev’s helped to recode the core to get a stable server. They then left the group and Abyss-X was abandoned. The project was revamped by Fr3DBr and the name changed to EX3. EX3 is the continuation of all the previous Abyss-X servers. The features included Mobs, Leveling, Groups, Vendors, PvP, first event system and much more! It also had IRC support and was also the first server other than StormCraft to use DBCs directly.

Vibe (C++)
Team: McKay34 and Spr4ttel
Vibe server was a server in heavy development, with many features. It was known for being very stable. It is currently the only WoW server that interfaces with IRC but I’m pretty sure Fr3DBr shared some info for that.

OWS (C++)

Coder: OloKKM
One man team OloKKM he took his time added feature when he felt like it but he had so many features working and there was a really nice video showing the features.
Soul Asylum (C#)

Coder: Benjou
This server was packed with unique features it was really popular but Benjou stopped development. However Soul Asylum continued to host the server privately until something better came out. They were bunch of assholes, not directed to Benjou.
zClient (C#)

Coder: Zite
It somehow stands out of this all, because it didn’t try to emulate server, but Client. Zite (with help from Foole on authentication and A9 Packet) created the first and only alternative World of Warcraft. It was text based and worked in retail around 1.3.x It was possible to create a character, delete characters, log in, move around in the world, interact with vendors, cast spells, open chests, instance, party, chat, attacking, tracking other players, and various other things. It had the ability to be easily scripted to automate tasks and could be used as a bot. It progressed quickly and was squashed by Blizzard just as fast.
zClient was a text based client that would work with the existing emulated servers as well as the retail Blizzard servers. Zite was the only dev of this project but admits to getting working authentication as well as other help from Foole. This project made quick project and the author released screenshots showing the progression of his client. Unfortunately after this, client had made so much progress it captured the attention of Blizzard and was promptly shut down due to the author being involved in zClient, a sister proxy program named zProxy, as well as various other server emulators.

WoWDaemon (C#)

Team: Codemonkey, Foole, Tharaxis and Benjou
WoWDaemon, it was the first open-source project server started by Codemonkey. Its developers were the most talented on the WoW scene. WoWDaemon had great potential as a fully scriptable server. Codemonkey was an individualist and he wanted to do thing his way. Same thing with coding WoWDaemon really fast and the team members were pissed since he wasn’t dividing work with the team. So basically, Codemonkey was working on his own. His team has broken and Codemonkey later decided to leave project. When Codemonkey left WoWDaemon, he released the source code of his older version (he did it even if it didn’t make sense). People in the forum were making their own script addons and stuff like that so they decided to become a team and continue works on WoWDaemon and they named the team WoWCraft. WoWCraft team consisted of AnGrA, Phaze and Afinda. They really advanced a lot, they even had death-world working. Their last release was 0.2e (probably for Beta 3) it had many features and until that day unimaginable, it featured XML DB.
In the middle of all this Stormcraft was revived again Generin started to work on the server again. He united a bunch of developers to continue Stormcraft. He got Codemonkey, AlexM, Fr3DBr, and some other devs on his team. Revived Stormcraft went into fast development where they need hosts to host the server Babbaar, Zite and another one who is forgotten.

At this point GotWoW had reached to a point of 40k members which was a huge milestone at that time. As that, it was the one of fastest growing communities around the net, and that probably attracted Blizzard’s attention.

Wolk a fine contributor to Stormcraft (not a dev) got a chance to test an old version of TP hosted by WantedMan. And he made obscene post about TP about how all the features were fake and they aren’t shit and stuff like that, which was a really huge debate. Suddenly some of the dedicated team members (tmm`, RandomGuy) of TP decided to release the source code and that was the point where TP died, thread which announced it was called The Python’s Death. WantedMan started to negotiate with Stormcraft about merge between them and Python before that (unlucky never happened) but after this post, hopes was lots. Unlucky, never happened. After that post on gotwow when they released source, the team stayed alive for a bit longer and supported the open source community that kept working on our server (SourceForge project that actually made it to #2 in activity). Team died completely after deathcheese was visited by Blizzard.

Various groups had taken up the source that Team Python had released and started building off it, updating it to work with the latest betas. One of these groups went by the name of WSD. They built off TP’s opensource code and to respect TP they put the same GPL license on their additions as well.

Then the downfall suddenly came. Gotwow was closed down and box taken over by Blizzard. Stormcraft, WoWcraft, Vibe was closed down by Blizzard and codes had been turned over (that’s why their servers can handle sooo many people) :)

Just before 8th August 2004, the dream has ended. Blizzard’s lawyers went to sticker’s house and scared him to death and since he was 14, he turned over his box to Blizzard. Sad message remains posted till these days.

Quote stating GotWOW? is dead

Statement from Blizzard Entertainment to the GotWoW? Community

As many of you already know, Blizzard has taken steps recently to stop the development of unauthorized emulator servers for the World of Warcraft™ beta.

While we appreciate the devotion and enthusiasm the GotWoW? community has shown for World of Warcraft, the development of emulator servers directly contributes to the illegal copying of the beta game client and creates the opportunity for people to continue to play on unauthorized servers after the completion of the World of Warcraft beta test.

Some individuals may have helped develop emulator servers under the belief that Blizzard was not opposed to the existence of illegal copies of the World of Warcraft beta game client. However, this belief was incorrect. Blizzard places a high value on its intellectual property and does not condone illegal copies of the beta game client or software that facilitates or encourages the use of illegal copies of the beta game client.

Leaders from various emulator-server development teams, including StormCraft, Vibe, and Khaos, have turned over their code and stopped development of emulator servers. We are asking that those of you who are continuing to operate unauthorized emulator servers for the World of Warcraft beta take this opportunity to voluntarily stop these efforts and turn over your code to Blizzard as well. For a short period of time, Blizzard will grant amnesty to those who comply with this request. Please contact us at wowsc@blizzard.com for more information.

Thank you for your understanding and for helping us to ensure the integrity of the beta-testing process. We look forward to seeing you in game when World of Warcraft is released!

After GotWOW? things died for awhile. All the developers were scared and disorganized. World of Warcraft was released. All the teams that were previously developing were disbanded and most had signed contracts saying they would never dev for wow again. The community chose Blizzhackers as their new home. Blizzhackers was an established site that had been up for some time hacking all previous Blizzard games.

After the community had moved to Blizzhackers and before Team Python expansion teams had included proper authentication a project to emulate the World of Warcraft client started up.



03 - Story of WOW(Ds)

Story of WOW(D, Daemon, Craft, Quest)

Phaze’s WOWcraft story

I was poking around today, and just out of curiosity, decided to see if I could find out anything about the old WoWcraft project, and what, if anything, happened to it. This was about all I could find, so I thought I’d throw a few more details your way.

We did indeed spawn from WoWDaemon, which at the time was still a Beta 2, and was little more than a sandbox. I must compliment Codemonkey here though, as the structure he had set up to work from was great. In actuality though, our databases were always in XML, which while we discussed changing it several times, there always seemed to be more exciting things to do. After the whole Blizzard scare, we went underground, and continued work as Team Codeblock for a short time. We did manage to get things like combat, spells, Vendors, Banking, bags, and even full guild & tabards (which was tough, since there was like 1 cap at the time, and I’ll admit, I never did get that damn Guildmaster NPC working). A couple other people that deserve mention are Nic and Telmo, and one other, who unfortunately I can’t remember his name at the moment, but he did quite a bit of our spell work.

For the record, we never did officially give our source to Blizzard. We just decided the safe route was to go underground until things cooled off. We kept it going for a while, but then eventually we cooled off. I myself left (never officially really) shortly before Yellow got involved I guess. At that time, it was basically myself and Angra, and I unfortunately just got too involved in other things to devote time to it.

WOWCraft is based on WOWDaemon. First the team WOWDaemon was made consisted Codemonkey and Foole and some others. Since Codemonkey was coding everything himself and wasn’t reporting to the team, there was a conflict in the team so it has been halted. Codemonkey went back to code for Stormcraft and released WOWDaemon C# source code so others can pick up from there. AnGrA and a group of people began to make modifications to the source they got from Codemonkey so they decided to become a new team and called themselves WOWCraft and they only released binaries for Phase3 Beta (with a little help from Codemonkey) as they wanted to keep it closed before reach certain level of functionality. Stormcraft got closed down (Generin signed over the Stormcraft source) and Codemonkey disappeared, and said he wants to work on new Stormcraft source in private (but as he hasn’t shown up again, new Stormcraft was probably doomed from the start). WOWCraft was afraid of Blizz so they decided to halt the project and give source to Blizz (I’m not sure about this as somebody says they did it and somebody said they don’t). They wanted to join another team, but could not decide what source to use…

Angra said on Ragezone

WoWCraft - Official Annouce - 10-26-2004
As some may know, i was one of the original coder of WoWCraft (a WoWDaemon continue project). We added many things, made a nice server, and blizzard never came afters us, but we decided to deliver the souce to them. In this mean time, the “self called” project leader (LegoPirate, a greed bastard) released our source without our authorization.

Of course me and the coders still talk to each other, but not about emulation anymore.

I decided to go on and keep adding things to wowcraft. Who would be interested to join me on add news features? I have a lot of things working, but a lot of bugs to fix. I’m stills working on 0.9.1 and my first step would be to port to 0.11 (or 0.12).

My contact email/msn is angraxs2@hotmail.com

At the exactly same time Team Python decided to completely stop working on a WOW emulator and to try making our own MMORPG (that didn’t work) but a couple members wanted to keep working on the TP server, so they started a little channel and rewritten the entire core (the base of WOWD). Few other TP members and friends were hanging out in a private channel still messing around TP code. They decided to merge, because it was useless to have two different teams working on the same exact code. And voila, there comes WOWD. They worked on for a quite long time, and there were big possibility of merge with OpenWOW (which just finished net rewrite just before WOWD leak). Shit happens and OpenWOW was closed down, WOWD got leaked and nothing mentioned earlier never really happened.

Anyway back to WOWCraft and their followers. The source code modifications, which WOWCraft made, were leaked. Few months later Yellow started making the code compatible 1.3.x and fixing things up, so he decided he needed a team very soon because it was hard to progress with a 1 man team. It was called WOWQuest. There was a huge conflict within the team between Yellow and Zite so it was a short ending.

Afinda’s summary of that days

Back then teams made this to improve their skills or to learn and to let the people who couldn’t stand it to wait for the game to enjoy it.

Regards, Afinda

Afinda tells the story from own point of view

If you got any missing information on WoWCraft, feel free to ask. And duh, the code wasn’t handed over to blizzard as I remember THAT tho AnGrA sure might have done it, i guess no one has ever had info bout that. Too bad b3 of the emu never was released since it contained almost anything SC had and for some parts even more :-) I don’t remember much. Out of all i think I remember that the team died not because of blizzard, we never cared about them really, its more like it was LegoPirate that tard. He was our so called “Leader” tho noone realy acknowledged him, he was doing nothing then nothing at all and so, we never realy had a leader the work was going on like “Hm I do that and someone else said he’d do that”

It was like patchworking the whole thing together, but yeah, that’s with all emus, but when we popped up with a problem, everyone focused on it and we all came up with theories on it and destroying these with reality and began working on it, step by step any progress was recorded, merged with the old code and then updated, so we could come over it :-D I think a pretty good thing to explain this would be A9 and Attack code.

I can tell you as much as I know of how everything just started up. Well for my part, so i can’t talk for anyone else. Somewhen I stumbled across rumors about WoWAlpha being leaked and so i began some intensive google research and discovered GotWow? For me, I just joined their irc channel right away and read through the forums, where i found the opensource project WoWDaemon. I downloaded the alpha already ‘course, and got WoWDaemon to play around with it.

First messing with the chat commands for Admins, then looking into the scripts made for it, somewhen LegoPirate came across me and asked me if i’d could help him with getting the Guildsystem to work so i began on helping him making the script partially work tho i couldn’t figure out what the problem was, later on when the team was already there the thing was, DB it’s most likely all about it :D

But well, i’ll continue where I stopped. I just asked some ppl and we ended up making a new irc channel where we could discuss our problems on the scripts trying to help each other and so we most likely ended up like a random group noone was clear on the skills of anyone yet in it the real key members where Angra Phaze me and some other guys i’m not clear on their names anymore tho and yeh what we thought about putting in after all was something to fight with, mobs! So we began to work right away and got a spawning system implemented with database and documentation of each mob with their ID’s then there was the random movement system, no mobs standing still but moving around randomly in a setted radius pretty soon after it, i think 1 or 2 weeks the half world was already spawned in the meanwhile we developed pretty good connections to some other teams like Stormcraft and we helped out each other when we discovered anything new so we began working on the combat system what kinda was the first real thing that was hard on us we tryed using enum’s (hex codes like 0×91 etc.) and putting them in a packet sent and got some basics into it but fighting still didn’t work so we found out we didn’t had to send a packet, but just instructions what the player would have to do when he requested combat mode so we ended up with our combat system working :P

Pretty soon after this we got NPC, Quest, Venders and other NPC’S vital to the game working a Whisper system was there, Who system that was fully working and so we were most likely head’s up with SC if the fucking new version were’nt to come :D So we hard sure some hardships with the a9 packet and had to get pretty much help and got it, the SC team partialy helped me on it and Codemonkey sure did also a grat thing helping us meanwhile i also had gotten my hands on the SC code that was somehow leaked to me, tho we never took a look into it, we were up to do things our way and yah thats for the developent history most likely I recently (some months) had also a little discussion with angra on how about things are where we almost revived wowcraft but dropped it due to the fact we didn’t talk anymore with each other still have all documentation and code of wowcraft 



04 - Dark Ages

Dark Ages of Blizzhackers.com
As I’ve never been here in beginnings. Let me just shortly summarize it. Servers went on development, Team Python was only public server for a long time, everybody has been fixing, coding and creating database (AFAIK the most completed DB was done by Hav0k team. Other teams derived from Team Python server went underground (WOWD and others), some tried to continue (WSD) but with the retail release of WOW, they stopped, since there was a problem with SRP6 coding (don’t ask me technical questions). Last Team Python (WSD was for 0.11.0, 1.2.1 release was fake that was never functional and freezes on connect) and finally WOWEmu arises… in the begining, nobody wanted to believe that russian author named WAD really sells his own creation (with stolen code from Stormcraft and other… is it said it is based on RunUO server (this hasn’t been proved) but WAD himself says that WoWEmu was written on c++ and was based on his own DAOC and EQ emus.) and his callbacks were easily removed, so others can play on emu.

Nomad answered question about so-called WOWEmu source

“Septimus src”… Once that guy hacked my forum and wrote me PM from one of developers accounts to send him RunWoW source.. I’ve send him RunUO sources, decompiled with Reflector :). And the next day he posted it on Blizzhackers :) That is the root of some rumors that WoWEmu is built on RunUO core, etc.

WAD really toughened his protection, and last versions taken weeks to get and crack. Luckily he gave up development and handed out his source to MarsWOW (or something like that) guys from china. Their today’s status is unknown. While WOWemu was alive, nobody wanted to work on another emus and only repacks were made.

With all these emulators and pirated wow clients, there was big risk of being spotted by Blizzard, and exactly that happened. Blizzard forced the site owner to close down forum… it was reopened at http://www.edgeofnowhere.cc but it misses WOWEmulation forums and talking about WOWEmus is prohibited. But nothing can stop real blizzhacker from having forum :) Kronos started his own WOWhackers, but his hoster (Renee) failed to keep up with high bandwith needs, so Kronos have a deal with Ashel. Ashel provided hosting and probably felt that he needs more money and fame, so put up some ads, removed admin rights from Kronos and his mods, and finally he cracked some passwords of important people. Shit happens, so there were two blizzhackers for a time… blizzhackers.us and blizzhackers.biz. Last few weeks .us had some problem with hosting, but it’s fixed and there are two Blizzhackers once more again. So… Bloody runs .us and Dameon (man who tried to pick up Ludmilla) runs .ws Blizzhackers.ws is the flameable place, be careful when going there :)
Blizzhackers got Blizzowned

Translation of FAQ from http://www.wowemu.net

Hot questions:
Q: Was WoWEmu project closed because of Blizzard?
A: No. I’ve never had any problems with them.

Q: Why was WoWEmu project closed?
A: At the beginning, I worked because it was interesting, later, when the game became deeply studied, interest has gone and I worked for money, many people worked against me, so I didn’t receive money, and they reached their goal. Now I don’t have any reasons to continue to work on the project.

Q: Who we have to thank for the end of project?
A: Everyone who were around blizzhackers/wowhackers. Crackers, hackers, liqueurs, pilferers and all pitiful beggars who doesn’t deserve to be named here.

Q: Can I obtain the latest version of WoWEmu?
A: Search for it on the internet, for example on www.google.com, you’ll probably find the cracked version, use that.

Q: Can I obtain official WoWEmu? I mean the paid one.
A: No, no.

Q: Why feature [blabla] doesn’t work in WoWEmu?
A: Sorry, didn’t have time to make it working.

General questions:
Q: What was WoWEmu written in?
A: C++. VS 6.0sp5

Q: Does it contain code from other emulators?
A: No.

Q: [blablabla] says it contained some.
A: [blablabla] doesn’t know what he’s saying.

Q: And how about another GPL code?
A: The only GPL code is contained WoWEmu is few functions from fdblibm from js by Sun Microsystems, even those are greatly modified.

Q: I like scripting language [blablabla], but WoWEmu used TCL, why?
A: Why not? Someday I’ll look into [blablabla] and I’ll consider if it’s worthy.

Q: what do you think about asprotect now?
A: its problem is obvious - it is written on Delphi, and this does not give to it the possibility of using VXD. Protection without use ring0 is already old.

Q: Who wrote WoWEmu together with you?
A: I’ve written core on my own. There were helpers who wrote the scripts and helpers who gathered info from Blizzard’s servers, those were so-called WoWEmu team. List can be found in the emulator, in file doc/ThanksTo.txt

Q: I’ve heard that there were people, who saw and wrote the code for WoWEmu.
A: Yes, at the very beginning there were the two men, namely Glorfindel and quetzal. quetzal didn’t write a line, Glorfindel wrote few functions used in spell system. Thanks to them.

Q: How many WoWEmu servers are used in the world?
A: In the middle of 2005 - I got around 25000 of them logged. I think that the total quantity of people who played on WoWEmu is about half million. I don’t know about recent numbers as I’m not following it anymore.

Technical questions:
Q: How to do….?
A: The project is closed; there will be no answers to technical questions.

Personal questions:
Q: What do you think about Blizzard?
A: I respect enormous work which they made with WoW, their designers and programmers. I respect some of their strategic solutions. I do not understand, probably as many, their relation to emulation, emulators made them free advertisement. I’ve never had nor has official or unofficial contacts to them.

Q: Did you have any experience with emulation of game-servers before WOWEmu?
A: UO, EQ, DAoC, MU.

Q: What does interest you now?
A: GunZ and La2 from emulating.

Q: Do you still being interested in WOW?
A: Not really, my name is too deformed in the community around the emulation of this game.

Q: What MMO game is the best?
A: DAoC. I know it from reverse-engineering point of view.

Q: Can you please write the emulator for [blablabla]?
A: If you want me to, there is no problem, if the game is popular and interesting, if you want, there are no problems, if game popular and interesting, describe it to me for sure.

Q: I have a question, where should I write it?
A: wad@inbox.lv

Answers by wad. 23/04/2006, Reprinting is forbidden



05 - Say WowwoW!

NOX and rise of WoWWoW
Guy named Kolie tried to convince public that his emulator called NOX will be the most feature-full emu of all the times, all he did (and of course he helped a lot to community and we are thankful for that) was releasing of WOWSRP6 dll, which helped Dr.Nexus. After Kolie released this library, he went who-knows-where. Farewell NOX and welcome WoWWoW. Dr.Nexus, the one of hard working guys out there, decompiled the Kolie’s dll and released C# code with WOW-SRP protocol to public.

PM session with DrNexus

Nivelo: I remember one guy who started ambitious project earlier, it was called NOX and his nickname was Kolie. From what I can remember his emu was completely same in principles (closed source, open scripts) he made srp6 library and left because of studying or something… I discussed it a little bit on IRC and then my idea materialized (ok, Spacey came with this idea, but nm)… isn’t DrNexus same guy as earlier guy called Kolie…
If you don’t know who am I talking about, just forget me and delete this PM, but I would appreciate some feedback if my theory is okay…

DrNexus: No I’m not Kolie :) but it was this guy who started working on encryption, I disassembled his dll to see how it works. He has made partially the encryption and with the WoWemu I’d finish it. Thx to Kolie and Wad so :)
After that I publish all the code on the different forum and lots of emulators came out :) You can see in each of the server encryption process my code :) they have all use the same function, so funny.

One of ppl using that code was tticapost and releasing EWOW (as new emulator) source to public. Later, the WoWWoW Alpha 1 has been released and it’s successfully continuing to present days, in December 2005 it hit Beta stages, but playing on WowwoW isn’t quite possible (because of bug that shutdowns server after some time)…

Kolie got back in about year later and once more again started works on NOX, everybody was fancy about NOX revival, but…

Year passed and…

Long time I havent been around. Yes I am the Kolie. Accept no other. I am interested in the W0W scene. A lot has happened since my time… And for the record here is what happened with NOX

NOX had a full working emulator. I wrote the basic framework for the servers, and as I struggled to get the server client interactions perfect, I had a team of at one point 8 people coding the games content into the framework. NOX was written in C# from the ground up, and it implemented an on the fly script/program compiler to change and load new things in the server without reseting. We had at the time 95% of all content in WOW. Right before the release I ran into some computer trouble, and I then handed over the source repository to someone who shall rename nameless, and formatted my computer. When I came back that person that I had spent months teaching C# and everything I knew about WOW emulation, he held the source for ransom. At that point I said fuck WOW emulation, and went my own way..

Let me make this straight to the point. Once again I am interested, and would like to work on an emulator, or other such work. I can work 50-90 hours a week coding for the next four years, and am very commited. I work fast, and I code well. I know my shit, and dont need to be baby sat. I can host project files and the like, and my preferred IDE is visual studio, using foundation server as source repo. I like SVN too. If your looking for someone serious e-mail me replic8tor@gmail.com

I also know c++, but emulator work is a pain in it. I wouldn’t have a problem converting a server to c# though :)

I am very knowledgeable in ASM and reverse engineering. And have done many projects in all of the above mentioned languages.

…as fast as the project started, it got closed and Kolie quietly stopped showing around.

Mackintosh Kolie promoted at blizzhackers.xx

Yeah NoX back on the scene again…. Come on in and ask pointless questions.

What is NOX?
NOX is not an emulator, first and foremost. NOX is a server package developed to work with the existing, unmodified, W0W client. Though the NOX project may have many/all the features of the official servers, this is not the direction of the project. The direction is to provide one of the most reliable and robust server packages, giving its users extreme flexibility and expansion options. NOX is currently developed in two parts, the Login or Realm Server, which handles the server lists and accounting, and the World Server which handles the actual world the players use. The current development of the Realm Server is in version 2.0.x. It is 100% working, and except for bug fixes or minor additional functions, development is halted on it. The World Server is in transition from version 1.1.7 to 2.0.x which is a complete rewrite. The current features are a very robust, very very flexible, scripting system, the features that do not exist in the server, can just as easily be written in by scripts. Both the World and Realm server work with the latest unmodified clients. It is a goal that if it is not a feature of NOX, any person can include that feature for themselves.

Project People
Kolie - Project Leader, Programmer, Reverse Engineer, Ass Kicker.
Some other people working on the project, would like to remain anonymous

WoWWoW on it’s own
WowWoW definitely deserves to be paid attention, not only because of the potential it possesses, but too because of interesting story which is behind it. As I mentioned earlier, it was running quite nice to December 2005, from that days many things happened. First of all, DrNexus stopped to show up in public part of forum, second, the activity in the forums started to contain mostly of questions like: “When will be another beta” or “Is DrNexus in here”, nothing that much constructive was discussed in there, so DrNexus decided to save some money for hosting and brought the forum down. His doing gave base for rumors about him being caught by Blizzard, but as the changelogs on the DrilLer’s testserver grows, rumors went away. As it was said by DrilLer, WoWWoW will be back in playable version and with next release the forum will open up again, so no need to be afraid of anything :)

Paybas tells the story of WoWWoW

The project isn’t dead because indeed DrilLer’s server is still receiving updates, and these are core updates, so that means that someone with access to the core is still working on it.
I don’t know how many people have access to the core and how many are actually developing it…
One of the script developers from the WowwoW project was unsatisfied with the (lack of) information that came from the core development team. This was a sentiment shared by a lot of WowwoW supporters, it was beginning to feel like a sleeping/dead project. This person made a threat to release the latest developer core that he had in his posession. Which version this exactly was is unknown to me, aswell as to some of the other script developers on the project.
I personally think that this core was not the latest at all but more like a little intermediar that DrNexus released for the scriptwriters and such…
Well only a few hours after this threat topic was posted the forum went offline, even on the #wowwow IRC channel nobody knew what was going on… then the forum went online again for about a day or 2 (can’t remember exactly), only to go offline again and it has been offline ever since AFAIK.
Maybe DrNexus had enough of all the whining and went ’semi-underground’, maybe this is his reply to the threat…
Maybe the forum simply has technical difficulties and nobody is around to fix it…
Maybe they switched the domain to another location to get rid of all the noobs stopping by…



06 - OpenWOW

Rise and fall of OpenWOW
m4rku5 recruited few guys to continue work on WSD, and he has never been seen after that. At that time only Joker was the on the team besides him (Power2All hung around, but wasn’t a developer) at that time Joker started to recruit more guys for m4rku5, but since he never came around ever again we decided to just form our own team and change the name to OpenWoW and thats how it all started. Open-source minded coders joined together and started to completely rewrite Team Python’s core. Meanwhile there were WOWD coding underground. It was supposed to have these two emus merged, because OpenWOW had excellent core and WOWD was flowing with features. After the rewrite was completed, Blizzard started with signing affair again and forced OpenWOW team to stop, it was just before the merge was supposed to happen. Blizzard’s lawyers came to P2A’s house to shutdown OpenWOW and wowdev site he owned. Rest well OpenWOW team, hope you had fun and hope you don’t suffer from your doings. Thank you. And hoping MaNGOS (mentioned later) guys gonna take from you, as is was known OpenWOW has the best core :)

Expect an update here soon ;)

This post was on forums addressing Blizzard’s attacks on OpenWOW

Blizzard is attacking us. Its attacking us so badly that I fear, we cannot continue on this project. Those guys threatened almost every member of our team, and, since everybody knows that in court wins the one that has more money, they have signed some fascist agreement which says that they cannot do any further work on any WoW server. And since this is a collective work, we cannot continue on it since they broke the collective. There’s a lot of fear, doubt and paranoia even amongst us since the contract they are required to sign requires to inform Blizzard about any further development done by other team members, and also to give them any information they have on other team members.

This is an exact picture of what were happening in the USSR with the guys that were playing against the system. Our work is against the American money-making system. It’s against the system that allows selling drugs, but prohibits distributing them for free. Games are just like drugs (that’s a proven fact, especially for young people), the only difference is that you can quit when you’re either out of money or of interest; for many people this lasts years; many years they have to pay. I must admit this kind of drugs is relatively cheap; that’s not because game makers are so kind, but because the drugs they’re selling are not very much addictive and if they ask too much, many will quit. Besides, this is a mass product and even if you charge one million people for a dollar, you got a million dollars.

Also I would like to point again that our work is LEGAL from the point of view of EU and other laws; the only questionable country is US — because of DMCA, and other laws that were lobbied by big software companies in order not to allow concurrency from smaller groups of developers.

Note for Bliz lawyers reading this: All this said is only MY OWN point of view. I haven’t discussed this post with other team members as most of them signed your inhuman agreement.

07 - Flaming Blizzhackers

Blizz-hackers: Flame-wars
With force there comes responsibility (Story of WDDG)
There was big need of somebody completing DB for WOWEmu, the two teams have arisen. WDDG started as small group with few spawners and scripters and grown to giant mastodont with ambitions to create it’s own emulator. Blackstorm ran their own server and got tired of WDDG so they privately started developing their own db, later they decided to release it to the public. It was rumored that they left wowemuscene because of Blizz threated them when they tried to mod client, but Savage refused it. They recently returned with new versions of their DB for WOWEmu.

Savage’s memoires

At its height Blackstorm had 68 active members, directly contributing to the database and another 47 that sent in scripts and fixes via email. At that time, I felt too much pressure and decided to hand the project off to Booswig, at that time many members left and joined other teams. We where never threatened by Blizzard with any kind of action concerning mods, it was all rumors. I returned to find a desolate team with no members left and since then have taken on several new and old members that have been working on updates and expanding the database. For the record, Blackstorm started on 16 November 2004 and first public release of work was on 3 Feb 2005, WDDG came into existince on 13 Feb 2005 with 2 members, RaymerJacque and AmaPussy, the later whom was a mod on a forum that we released on.

But let’s concentrate on WDDG. They were lead by ambitious and self-confident man “raymerjacques”. He sounded like lifesaver to most at the beginning. DB evolved and whole WOWEmu scene broken into two parts. One part hated WDDG and another loved them. Loving people believed everything what raymer said, once he said there is emulator being worked on WDDG, everybody known that it can be true (MaddoxX promised help when he joined wow-emulation with promises of 100000 ppl server). One day something went wrong and link to Ludmilla bins v0.0.1 were posted in non-dev section of WDDG forum. Phaser grabbed it and later shown it to whole world, raymer as revenge leaked wowd’s sources (it’s been leaked by Kronos, who was given by Spacey for stress testing it on his box) updated in underground by shouji (WantedMan and others, dunno who, since it was private), that was followed (BTW Ludmilla started with this as a base AFAIK). And real war begun. Raymer started to act like low-minded everytime when the word Ludmilla was written, he declined that Ludmilla uses wowd sources leaked few months ago. There was peace for a while, it lasted about a month. The flamewars began again, when WDDG started to accept donations for upcoming 100% Blizz-like emulator (betatesting and access into donors section), which had to be done for Christmas. He flamed, other flamed, he flamed, other flamed, and round and round… It everything ended up with IRPG team leaving WDDG and releasing sources to public (i’m not using word: “leaking” cause raymer based it on GPL’d source of WOWD which was based on Team Python, don’t agree with me if you don’t want, maybe I don’t understand what’s going on, but anyway… i’m not a pro-developer, so maybe my opinions are stupid) :) WDDG got a great hit and refused to continue publicly, shutdown it’s forum and went underground again. Who knows what’s going on with them right now. Ludmilla is alive once more again… read on to know more :)

Two points of view from two main acteurs of the Ludmilla affair (I was too lazy to rewrite my text, so I’ll add just those quotes :)

Phaser

The Ludmilla server was located on an FTP, discovered by a friend of mine. He gave me the link and I downloaded all the stuff there, including the binaries. I then told shouji and gave it to him, because there was a pretty good DB with over 3000+ quests from IRPG. I told him not to give it to anyone and just use the DB as it its. I then contacted raymer and told him that I have his precious Ludmilla and that i would not leak it if he answers some questions that i asked. He (of course) acted like a jerk (yet again) mumbling that Ludmilla was created using code from WoWD, WowwoW, RunWoW, WoWEmu (yeah, that’s right). He told lies and lies how he had databases for all the emulators that were famous back there. RJ said that his team worked on databases for all the emulators, even RunWoW. It was clearly obvious he was using WoWD core and nothing more. But the bastard would just not admit it. So when another flamewar began at BH where Ludmilla was accused of using WoWD core and not their own as they said it would, shouji got mad and leaked the files I gave him. It was not me who leaked it, it was shouji. And therefore he is responsible for the sources that were leaked from his own emulator. I merely acted as a conjunction between two opposing sides. Do not blame me for the death of shouji’s project.

shouji

You are right, I was the one who leaked Ludmilla (Crudmilla :P) I leaked the bin that you gave me. I gave kronos WOWD src to test on this Linux box (as WOWD was getting stable and full of features we had to stress test the new cellcode that was added) we needed mass newb testers to test out the new core thus this is why i gave him the src to compile it on his box. At that time I didn’t even know of the existance of WDDG scums. Kronoss leaked the src to raya0dhasdmer(don’t remember his name) and the dev of Ludmilla started, kronoss aware of blizzard spying out he formed mangos team to be “opensrc” but his primary objective was to make blizzard take its eyes out of WDDG and look touwards mangos, wowd vanished as all coders got pissed cause of the leak. Then Ludmilla was leaked by who knows who and Blizz could finally pawn WDDG team and this as you all know happened.



08 - Euro-Asiatic WOW

Eur-Asia strikes back
I really don’t know where to attach RunWOW… completely separated emu, which is developed by Ukrainians (they refuse to let out source, they even don’t want to let out bins, and they don’t posses server able to handle international players, so only Ukrainians have they’re own private WOW) They faked being taken down by Blizzard so they can get back with more updates later on… Ukrainian RunWoW project started in November 2003. It is developed in C# and uses CodeDom to compile script part. Unlike RunUO its core is only script compiler/launcher and network gate. Uses Kolie’s SRP.dll, some knowledge and code from other emus (RunUO timers, WoWDeamon-like DB/UpdateFields attributes system and so on). It is closed-source project developed for http://www.wow.wnet.ua game server. RunWoW team started with Nomad (developer) and vhf (DB guru). It’s said that both sources and DB got leaked, but noone knows where truth lies. Now it contains some DB operators and formula masters: Belka, Joe and others.

Something have changed when post on BH announced new emu… RunWOW (not to mix it up with RunWOW developed by ukraine), promising chinese project for (oversea) ppl accessible only by translators. Time shown that RunWOW is nothing more than decompiled WoWWoW with few added features, still possesing good possibility of playing WOW. Recently there is another emu called WOWDragon (i personally call it… fuck unicode, viva-la chinese) that is WOWDaemon (WOWQuest) updated to current versions something fixed and so on… This is the way how china strikes back  iWOW continued on this core…



09 - World of Tomorrwow

World of Tomorrwow
Many emulators went around and left. Let me name some… Thanatos (Stormcraft continued, well known hoax), eWOW updated (ewow with support of 1.8.0), Simpleserv (Czech guy who made a bet for 2000€ that he can complete Java-based emulator until 1.1.2006), DelphiEmu which come out of nowhere with basic functionality (done by user456) and lots of forgotten ones. Three main emus left: MaNGOS (not really WOW server, but multi server which supports WOW, steady progress in here, open source, anyone can join and help, looks organised, has the best presentation), WowwoW (ideal small-business server with really scriptable everything outside the core, state unknown as Dr.Nexus is working in the privacy). Let’s hope players (me) will get a really good emu soon and wish devs enough of patience with coding, flaming and complaining and WOW itself.

World of Miracles
Something happened once more again. New year 2006 passed on and people was still hoping for a miracle… such a miracle shown up once nice day on Blizzhackers stating the Expansion was leaked and will be released sometimes on IRC… I personally joined that session with lot of hopes, the biggest star in channel was original WOW’s leaker ‘Skull (unluckily, that ‘ was thing that cleared it up all later. Everybody was talking about that and that and that, old friends met, old legends shown up again and everybody enjoyed the day. But the main thing why everybody came remained unseen. ‘Skull (mostly |afk) held trivia for so-called private FTP and wonderful thing was told. It’ll be provided with sandbox to explore new continents. Wonderful you might say, but next day arrived, evening and release time came and unlucky no leak happened. Blizzard released Alpha and Beta later this year (09/06) with his own downloader therefore supplied whole Emulation scene with new material to build on…

And it all ended up like this…

Jimbo: We have been working hard to bring you this…
Jimbo: ROFL NOOBS THIS IS A SCAM DIE!!!
snowflake: HAHAHAAH
snowflake: PWNED
snowflake: ROFL
Jimbo: LOL
Jimbo: nice one



10 - Times are going mad

Times are going mad
Pandora (‘s Box)
Team: Dameon, Burlex, Brian, Forsaken
It is follower of WDDG’s Ludmilla. Total rewrite was commenced (I was told that never really started) but as developers left one by one, cores were changing more often than socks it had pretty short ending. At the beginning as the core was Ludmilla’s, few weeks later when Burlex left (as he was only developer at that time working on core) the Ludmilla’s core was abandoned. A week later it was announced the new Pandora will use Java and currently is being ported from eWOW’s src. This was actually demented by Dameon, but I’ll keep it here :-) Another week later a guy showed in their channel. He said he works on DOL (Dawn of Light – emulator for DAOC) and wants to help with project. So all the ports were halted and core switched again… A week later everything went wrong and Dameon with Brian left at the same time… Pandora’s box wasn’t supposed to be opened…

Dameon’s resignation from Pandora

Ok it has come past time that I do this. I can’t take the pressure anymore. Lack of coders, lack of help. It’s too much to take and takes the fun out of coding an emulator. Therefore I have finally come to the decision to quit project Pandora, and move to a new project that has more potential, and an all around good staff. I’m sorry if I disappointed anyone. I may continue a small amount of side work on the core and then release it with semi-1.9 support, but don’t get too worked up over it. From the beginning it has been 3 people. Me, Burlex, and Forsaken. We lost Burlex. That brings us down to 2 actual coders. Its just too much stress to take. If anyone would like to take over the project from here; please send me a pm and I will get you the adequate information. Thanks for everything guys. I will still be around of course as this is my site now :-)

I throw a huge thank you to everyone who helped and tried to provide us with support!

Thanks, Dameon

Times are going mad
With Pandora’s end, many people asked what’ll be going on now. Time gave us few answers. Raiden started his project FuckWad, tried to get all the developers on his site and tried to make dying WOWEmu suffer for longer time. He tried to get info on how the WOW works, so he can apply it to WOWEmu by injections. That idea died as soon as it started, partially because new patches was released and people (based on OldOne’s idea) modified patches for client to work with old WOWEmu, partially because many thing on WOWEmu was fixed by TCL plugins and partially because Raiden wasn’t that leet as he needed to be to achieve so great goal. He wanted to bring GotWOW community back to life, but ever since situation changed a lot from that time, he failed. His project separated into three different ones (FuckWad, Ahn’Quiraj Project and iWOW). First two concentrates on bringing up 1.9.x content to WOWEmu and iWOW started completely new development. TheBlackMage as main developer later canceled his partnership with Raiden and continues to modify WOWDragon (based on WOWQuest (based on WOWDaemon)) :-) His progress is publicly available on http://fearthemurloc.com and even if it’s rather slow, it show some progress. It won’t be playable in short time, but someday we might be surprised :-)

Blizzhackers.us vs Blizzhackers.ws
As soon as these two were established, the fights began. Hacking one, hacking of the second one with no end. Children fighting if you ask me, but ever since the ego of the both owners is reaaally huge, we’ll have to get over it :-) They are doing great job keeping it alive, thought :-)

Ludmilla? Ludmilla!
It was reported dead twice or three times, but in the beginning of March 2006, the post on one of Blizzhackers forum infused life into Ludmilla’s followers. It was unofficially announced live and ready and ready for release in less than a month, underground proved it, so we’ll be glad to see little lady in here.

Ludmilla’s changelog presented on several emulation forums

Ludmilla is coming, on next month it will released, absolutely free if u wait for official release, and it costs 50$ if u want to get it at the end of March.
< ======Change log======>
+ Stealth works
+ Auto shoot works
+ 100% working tamping pet, pet system, pet spells…
+ 100% working honor system.
+ 50% working pvp system, still req command /pvp.
+ Full working professions, enchanting, with little bugs of fishing (I don’t care about that).
+ Full working races bonus, death system, only party members can see our spirit? Elves become wisps after death.
+ Animated world, working NPC, walking and saying guards. Still few but can be edited more.
+ Smart mobs, casting different spells but still few, need more editing.
+ A lot of little fun stuff like alcohol, underwater-breathing, reading books, sitting on chairs.
+ Reputation work good, but need some little fixes.
+ Full working loot system, no more stealing loot!
+ Instances and BG still under editing, but soon they will work like on official (no more war for bosses).
+ Control coordination, no more falling under world, mobs wont walk underground too, they still come through object, but it will be fixed later.
+ Auto-correcting DB and dynamic saving, no more world save! You will continue playing from the moment when server crashed!
+ And at last Ludmilla support 500 players online, and perfect ping (if u have a good server PC)

As you might have heard, the release of Ludmilla really happened. One nice day MasterM decided to show the beta version to the public. It was loved, hated but from what I have heard, never really used… It needs its time to evolve…

Ludmilla finally sees the daylight (It’s more like: “the daylight finally sees Ludmilla”)

This is the end… of waiting…
It was a long time full of ups and downs, promises, suggestions and lies. It has been ages since some of our previous project members decided to leak our sources and the flame wars began. We’re proud to show you the real Ludmilla in her current state of development, also known under codename ‘Kobold’. We hope that the community will stick together and grow with this. We hope that many spawners will start their work on new instances like Naxx. And we hope that there will be a big scripting community using this servers oportunities.

http://rapidshare.de/files/35891248/KoboldServerLite.exe.html
http://www.megaupload.com/?d=MAD1ZGJL
EDIT: sorry, forgot to tell pass^^, pass is “ILoveKobold”

Thanks to:
WOWD devs, especially Ignatich for Inspiration
Perm city
Riga city
All testers
Everyone who didn’t stop believing

Our officially supported servers:
http://www.warteam.ru
http://wow.sinichka.net
http://wow.internets.ru
http://www.1wow.ru

Have Fun

Blizz strikes back!
Kronos talking about Blizzard striking down development teams

I talked with pavkam on the phone.
Rod Rigole (Vivendi universal games), Leonora Roos (Forensic investigations Technology), Bowman Gilfillan (BG Atorneys), Christian S. Genetski went to PavkaM’s dorm, and forced him to retire from the WOW scene. They said that they are after me and Ashel next. They already went to RaymerJacques in South Africa and forced him to retire as well. Conclusion - All of WDDG is pretty much dead because of this. I will retire as well. Raymerjack said that Blizzard is going to take down WowwoW and MaNGOS as well. They spent 9 hours in RJ’s house searching his hard drive and stuff. I’m retiring from the WOW scene as well. I’d suggest you to take this project private, or theluda should contact that laywer of yours just in case.

Raymer’s life is sometimes sad (no idea if it’s true or pure fiction, still fun what can people can think of)

By the way, I had a conversation with a WDDG developer and he said that the money that donated…the developers never saw one Penny of that. All the money went to ray… which he bought porn with…



11 - MaNGOS

MaNGOS for everyone (http://www.getmangos.com)
Do you like fresh fruit? Then MaNGOS is definitely for you. Even if it isn’t meant as pure emulator, but as project of MMORPG server with support for many games (more like universal MMO-framework) I’ll mention it. MaNGOS started as a small project with few coders and grown up to maturity. It uses WOWD core as a base and modifies it to fit it’s needs. Open source and professional approach from team makes them to look really promising. The management of the project was taken care of by theluda. Few of coders, namely mmcs and Phantomas left the team to take care about their things (you know… life and so :)). theluda got uneasy task to keep moral of the remaining team up. On the 24th March, the first developer meeting happened and targets of development were set.

As the time flows MaNGOS is getting feature-full, getting stable core, robust and spawned database. Many people is joining the development and writes patches for it. They moved to Sourceforge in 10/06 because keeping SVN online from own money wasn’t possible anymore. That’s a really good growing, don’t you think? Anyways they successfully managed to step over 0.5 and targeted to 0.6.

External projects such as ScriptDev (Septimus - https://opensvn.csie.org/ScriptDev), TTDev (TheSelby - ???) and SDB (Silver - http://sdb.jino-net.ru) joined the goal of making great server. Content won’t be provided by MaNGOS team, because content contains part of copyrighted material and can be easy tracked by Blizzard. Two project were devoted to managing the content abbat’s TaNGO (which is currently discontinued) and MaNGOSCMS created and developed solely by wrs.

ScriptDev2 is the continuation of ScriptDev — http://www.scriptdev2.com — it’s led by NoFantasy and (previously) Ntsc. The original SD died when the leader, Septimus, disappeared. Ntsc then created the ScriptDev2 SVN as a continuation, because only Septimus had commit access to the old SVN.

SD2 now also is the home of ACID (Artificial Creature Intelligence Database) utilizing the EventAI system developed by SD2 and MaNGOS. Another EventAI project, Heisei, later appeared.

|XO| @ IRC

OK, so the story of MaNGOS begins with the end of WOWD… at that time there no open-source project… There was wad (who was still releasing updates and wowwow (which was semi open-source). All C++ projects were closed source… I don’t know how long ago this was but I’m guessing it was around 08/05… in any case… MaNGOS originally started with the WOWD source code… which was leaked by kronos…. kronos’s intention was to diverty attention from WOWD and Ludmilla… but he also supported open-source… He was basically playing both side of the fence… He wanted a win-win situation… Either MaNGOS would be a distraction for Blizzard and keep them away from Ludmilla or… MaNGOS would be sucessful… So originally before MaNGOS, there was a an emulator called WOWSP which was basically WOWD repackaged… kronos and a coder named chance started that project… WOWSP (WOW Single Player) then theluda and a dev named sioully wanted to start a new project too… I also wanted to start a new project and told kronos that he should start it because he had all the connections… We started a new project and we didn’t have a name for it… We decided to vote on a name (me, kronos, chance, theluda ,and sioully, mmcs, fulgas). sioully was a brilliant programmer and theluda was always the leader for MaNGOS… kronos basically provided the resources (leaked source code) and coders… chance left after coding one stupid command (.addspw)… he wasn’t much of a programmer anyway… we wanted to change the name from WOWSP to something else because it was a copyright violation.
So we ended up choosing MaNGOS, since sioully also wanted MaNGOS. Shortly after that, we created the project on OpenSVN… since we didn’t have hosting at that time, and we used to meet on #mangos on freenode… I’ll tell you how we got there… theluda had a lawyer discuss the legality of MaNGOS and it was legal according to European law as long as we don’t use any copyrighted material… that’s why there is a strict enforcement of copyrighted material on MaNGOS website. The sources and everything were cleaned, we began recruting… Some of the oldest devs were captnoord, sioully, andre2k, sanitariu, and unique1, mmcs, phantomas. mmcs and phantomas oficially left… sioully went missing… rest are still around…

Anyways, after the project was started… there was that whole big Blizzard scare… it was the time when WDDG got shutdown and there were rumors about ashel and ray… kronos got a visit from Blizzard asking for information about ashel and ray. He told them what he knew and signed a paper… Before that happened though, he leaked Ludmilla to MaNGOS because of that there was a brief time when MaNGOS was contained in Ludmilla’s sources and there were flame-wars from both sides… since Ludmilla was really incorporating MaNGOS sources. At that time it was decided to move #mangos to #mmorpg-dev the SVN was also shutdown for a while and theluda moved everything to mangosproject.org he put money from his own pocket to provide the hosting services… and that’s basically mangos history.

Out of the developers: captnoord did most of the opcode sniffing and keeping it up to date with Blizzard versions… unique1 did the movement handlers… mmcs did a lot of the core code… phantomas did the map extractor and event system and also a lot of the core code… andre did the honor and exploration system… sioully did the dynamic grid which allows mangos to reduce consumption… sanitariu contributed mainly to the core… theluda was the leader… I did pretty much nothing :) and I quit about the time mmcs and phantomas quit… I was a founder at least I think I was since I came up with the name and suggested it to theluda :-)

MaNGOS got it’s name on 28th August 2005

[01:46:57pm] < |XO|> you there?
[01:47:12pm]

half there, working on the sources
[01:47:17pm] < |XO|> chance doesnt really care about the name….
[01:47:39pm] < |XO|> kronos isnt really going to be too involved…you want to decide the name between us two?
[01:48:34pm] < |XO|> i sent sillouly and kronos a pm about the name of if they respond we’ll take thier votes…
[01:49:37pm] Well, either MaNGOS or MaMGOS then. Let’s see what kronos and siuolly will vote for
[01:49:46pm] < |XO|> k..

Line from a point when there was some interest in merging Ludmilla and MaNGOS

[12:57:17pm] no, we will not go open source, opensource = dead project. This is fact, even if project can be picked up by other later on, in truth it never dies, but we do not want to be shutdown so other can sometime later pick up where we left off, it is stupidity, that is what it is.

Raymer adminting that Ludmilla stole code from MaNGOS

[01:12:14pm] it is true that kosuha took code from mangos, but go and ask theluda, I sent him a message telling him that I found out that kosuha took code, I was honest and up front, and this is how it should be.

MaNGOS revamps: SVN to Git

Shortly after the Trinity project was created and established, MaNGOS went offline for some days. Theluda converted the forum from IPB to vBulletin, moved the project to http://www.getmangos.com, and the project changed from SVN to Git.

This had been discussed for a long time, and most devs liked the idea.

The database projects and founding of UDB

Seizerkiller (current UDB dev) about Modb/UDB:

Seizerkiller: Modb was born after the merge of PeachDB + Wom-TBC then Gideon’s DB became the main DB and we added some PeachDB part in it. I have been working on Peach DB since the beginning. This DB was created by many actors of the 2.0.12 patch because we needed data to test TBC, the not exaustive list includes ratatatata, TOM_RUS, Enturion, bogie, Dereka… That is also why MoDB stands for MangosOwnsDB…
Seizerkiller: …(the Mangos devs DB).
Seizerkiller: Well in MoDB the idea of merging with SDB was been planned for a long time, since we did not see much sense of having 2 databases. Nothing really happened for some time but when there was a incident where some of modb tools were in hands of wrong people (Vampir) about how he got them is for another day to tell, anyway that sprung up alot of discussion in sdb / modb forums and at that time…
Seizerkiller: …we at modb decided to write up an merge proposal in sdb forums
Seizerkiller: around the same time brian created “neodb” which was called MoSDB a merge of Modb and SDB (the best parts of them, by his words) then NEODBX.ORG was born. That ran a few days until neo contacted cyrex & brian about the merge (which had already a post in sdb forums ). Irc meeting was set up and some time of talking (days) and thinking udb was born.
Seizerkiller: but in short, the idea of merging sdb and modb was a long time goal for modb, and the big conversations in that time (The tool leak, brian and cyrex’s “MoSDB”) put some speed to the plan and after inviting everyone who should / wanted to be apart of the new merged db were invited to join a irc channel at freenode

And SDB:

Zor: You know anything about SDB?
Zor: History that is
Seizerkiller: That’s soo long time ago that i don’t remember much of it. Only the most recent part where Silver disappeared and itiazai / cyrex kept sdb running for the time until it’s progress became slowing down more and more and then it just continues on the merge way

Neo2003’s original SDB/Modb merge proposal post:

I am pleased to see the discussion has changed a bit and is more friendly, let’s not enter in a war like between wddg and blackstorm years ago.
I am not here to offend anyone, but just to expose my views and to clear up some subjects. Feel free to create another thread in a more appropriate section of the forum and to move all these posts, you can even create a section less public so that Modb dev team and SDB dev team can speak in a more elaborated way.
This post is a bit long, but I think things have to be said :p
Rapid history recall about Modb:
-   The initial DB was created long ago under the name “Cindy”
-   During the 2.0.x core development, we (helpers is this project) needed a DB to test the core and we used PeachDB, then we started to update it a lot
-   We did then merge some parts of Wom into PeachDB
-   Modb was really created and put public after this, using the Cindy base Gideon did maintain and merging the content of PeachDB inside
Modb is Modb, nothing else:
The content of the DB has changed a lot since the first 0.5.7 publication. We did drop many tables like quest_template, item_template, creature_template, npc_gossip and a large content of other tables too in order to recreate them better from a clean base. We redo all spawns zone per zone and adjust template in the same time. 0.6.3 will have half of Eastern Kingdom redone. At this time more than 50% of the content will be changed compared to 0.5.7. So I think I can say Modb is Modb, nothing else.
Our way of working:
As you can see, we do not work like SDB team. We are a group of devs doing the background parts while the community is fixing problems or provide the content we miss.
When we face a problem to match Blizz behavior, we dedicate some time to create a core patch while preparing the data. Remember quest xp, .npcinfo fix, .movecreature, game event system, spell system implicite target (not yet added)… And more are coming.
So we develop de DB by adapting core when necessary instead of adapting the content. When we have data that core does not support, we try to make it support the new data. Of course our requirement to be able to provide good data to the db is to have an off account each and to know well how the core is working.
Where the “problem” is:
Both projects being open-source, I know any content from one can be put in the others despite my reactions or the ones of others Modb devs.
I believed that a fair competition between 2 ways of making 2 db could be an option that motivates both groups and bring both content to the next level, but this is true and false, this creates motivation, but also a lot of frustration.
When we come here to argue you take Modb content, this is more related to the “fair competition” spirit I tried to maintain in Modb team than flames against specific people. More than that, imagine, when you spend 50+ hours working on a beautiful dataset and that you read “npc_gossip full table (tk modb)” or “creature_addon from modb”… We are not even discussing hours here, this is days! And it is a bit frustrating when you have a “competition spirit” in mind :p  I hope you understand this point.
In the same spirit, I was always against using SDB content in Modb. You asked why this debate does not occur at Modb forum, you have the answer: we don’t use sdb data yet.
What’s next?
“Competition” is not the good way to proceed. If we go on like this, I know what will happen: Modb will close one day or another when the frustration is higher than the motivation.
Many would like that “we join forces” and go only for one unified DB. Now that you have my feeling, I let you think about it for both technical and organizational aspects while I do the same with Modb team. I personally still did not find a way to combine our way of working, I may miss something. Please get NuRRi and other main SDB devs in the loop.
Neo2003 about Neodbx (on UDB forums, after the merge):

Neodbx appeared at this time, between Sep 06 and Sep 25. Then we had no other options, we had to speed up the merge. We wanted to eat SDB a bit later, we did just “absorbed” it in a merge to make UDB.
I am not posting this to start a polemic, but just to clarify that UDB was planned already before it occurred. Not by a single person, but by 2 groups that did not know the other was planning it and from 2 sides.



12 - Doesn’t fit anywhere

DelphiEmu, Delfin, OpenDelfin (http://forum.delfin-wow.ru/)
user456 started to post his development goals on Blizzhackers. Later, he opened his own website and got Russian Delphi developers to help him with his work. His emu is in the beginning of his life and slowly building up decent features and game works and uses DBC file database. In the beginning it all started as try to find out how the DBCs works and evolved to pretty nice program. Delfin is still evolving pretty slow, but steadily. Nowadays every month the new alpha version is thrown to the masses. Features are growing and bugs are being squashed. Good luck to next months/years. At the recent state, this emulator is much developed, but also the developers aren’t open minded so they require payments for this piece of software. I also doubt that there is any info publicly available in English, so I’d expect it not to be popular, hope developers can prove me wrong.

The big change has happened in this project, firstly, it completely dissapeared from the world, just releasing the logs which seemed to be pretty big. In February 2009, they decided to go open source, so they opened svn and database svn for public (source: http://forum.1wow.ru/showthread.php?t=7976), though they are purely russian community as most of (maybe all of) the developers is russian. They also changed their name to OpenDelfin. Their SVN can be found at: http://opensvn.csie.org/OpenDelfin/

Thanks Vladimir for pointing open source conversion of Delfin :-)

YAWE (http://yawe.blizzhackers.us/site)
TheSelby @ blizzhackers.xx

This post is NOT:
1. To say that I have a SUPER GOOD WoW Emu.
2. To gather a Team to work on a Delphi Emu.

This Post is About:
1. Me and a friend have started a Delphi Emu 1/2 month ago.
2. It’s not even near to be called an actual emu.
3. You can enter the game but that’s quite it for now.
———————–
This project was started for FUN purposes to see if we can actually make something work. We made it work, so we kept doing more. What I can tell you is that such an Delphi-based emu has a future. We use our own core with some ideas taken from C++ cores out there. As I said, initially this project was for my personal fun. Now I see that if a proper amount of knowing people can gather we can pull this one even further, so I made it OSS.

So, Are you a Delphi developer that work more that just with a few VCL stuff?
Do you want to learn how to apply your knowledge into MMORPG server?
Do you think that WE can make a good Emu project based on Delphi?
… Then you are invited to help us.

Notes:
- It’s NOT based on plain methods, mem… etc access as USER456’s emu is based. We use classes for everything.
- Delphi 2006 REQUIRED. We had Delphi 7 Platform units but most of the new code we have added uses D2006’s additions to language.
- It can and it WILL be optimized a lot.
- We work by fixed milestones. Now, I’m about to complete milestone 1 (which is the biggest one).

Successfully continued by TheSelby and his team, YAWE has a really professional approach and works on it still slowly continues. They released few versions (1.11.X, 1.12.X) and when the TBC alpha came, they managed to release emulator which supported TBC with items… It’s simple installable server with text database. Its goal is to be as much optimized as it is possible. Server still slowly developed as of august 2007.

Panthera – a silent feline
Spacey’s story about Thanatos (Panthera) told few months after project’s death

Well, it all started with me and nneonneo we were hanging around in the XaosWoW (A private server) IRC channel and we were just kind of half-seriously discussing the possibility of bringing StormCraft up-to-date, it was nothing serious at first. And then we started researching a bit on the source still not completely serious, I talked it around with shouji, he sent me some SRP libraries and wished me luck.

At the time it still wasn’t too serious. nneonneo started looking at the possibility of fixing the server-client communications. Things didn’t seem to progress so fast, and it looked like it we wouldn’t be able to do anything with it in the end. But a few weeks later, nneonneo posted his progress on BH. He had managed to fix a large part of the server-side communications, and you could now at least login to the realm list server and create a character. From there, we gained a big public attention very fast, of course, however I felt that it was not a very good kind of attention, and I was right. We were shortly thereafter contacted by AlexM who told nneonneo that it was disrespectful to continue the development of StormCraft, at the time I contacted a man named Wesko who, at the time, created a similar project so I told him me and nneonneo were interested in merging, on the condition that we would go underground. He accepted, so we simply stopped posting all progress of the project, hoping that people would forget it. In time they did. At the time nneonneo was the only active developer but later we managed to get ahold of many very experienced developers, whose name I will not reveal for their privacy, however the development hit a little roadblock, well a rather major one, after awhile we weren’t able to login to the world successfully without causing the client to crash. It took a long time for us to figure out the reason and it almost seemed like we had hit a dead end, but then one of our best developers found the solution (I won’t go in to details about this) and so development continued. Since it was so old we of course had a lot of cleaning up to do, but it was rather easy and development was going very rapid now. We cleaned everything up and made it work very smooth, and then we started working on features. The project was officially called Thanatos at the time, everything was going great we constantly recruited new developers interested in helping out, but we always managed to keep a low-profile. Until day, we announced the project publicly, because we were short on developers. This proved to be quite a mistake so we eventually discarded our statement as a hoax. A lot of people had a hard time believing this, but we had a lot of political influences at the time, so we managed to make sure that the public belief was that Thanatos was a hoax. Development moved on as usual, until we had an internal quarrel and Wesko (Yes, he wasn’t exactly the best leader) decided to split up a big portion of the team and thus we were renamed to Pantera, and this also caused a lot of members to be kicked out. The project regrouped but a lot of members were growing more and more displeased with the project, and we also discovered a lot of previously unknown weaknesses with the core, so a big rewrite was started. But because the member that was working on this left, due to circumstances that I would not like to disclose, the project started dying out gradually until somewhere around the beginning of this year when it was officially announced dead by the leader.

So that was the story of so-called hoax, one never knows what’s happening under the public scene, right?

Fusion (VB6.0)
Team: Warden, Makisu
It was developed in the 1.10 days, originally created by Warden. Many thought at the time, that Visual-Basic is a weak language - Fusion, proven they were wrong. The first few versions were underground. Once version 0.03 came out, it turned out to be Open-Source. Version 0.05 has splinted Fusion into two directions, VB6.0 version and VB.net (2005). After few months in which Warden kept adding minor pieces of code, it seems as if M4ksiu wasn’t around. The project was dropped when the creator, Warden got banned. The VB.Net sources are nowhere to be found.

vWoW (VB6.0)
Team: UniX , Anmorphic
A continuation of Fusion (VB6.0, Warden M4ksiu). A few weeks after Fusion was dropped, individuals decided to keep developing it. They added an Item-Database, Finished every aspect of the login/realm servers. The team dropped and the members joined ‘aWoWe-Project’.

‘Modern’ WoWe
Partial Team members: Gaddas, Unix, Anmorphic, Sprit
A continuation of a WoWe (VB 6.0). The team of VB coders ported aWoWe to VB.NET, added a lot of new futures and are underground.

!PiCaSsOeMu! – or how the hell was it cased…
Warden’s story of Pablopicasso from emupedia.com

The story-line itself:

A guy who called himself Pablopicasso (NO! - Not the artist :\) decided to step into the emulation community - roughly. At first - he was a som esort of a Mangos developer and not one of the official ones … but more like unofficial one. Obviously he lost his interest in Mangos after few weeks - and then formed his own WowwoW Developing forums.
He decided to keep developing WowwoW after Bloody (or someone else - cant remember) published some kind of sources. He had a special forum for it - he called it “Burning Network” - “Burning WoW” or something like that.

He began invading sites like Ragezone and Emupedia - as well as the good ole’ Blizzhackers. He was there advertising his site and his work. Some people found interest in his work. Most people didn’t.

At some point - he had enough of doing something that is NOT, and he decided to start his own emulator. He had a special forum built for that mission where he planned his development - recruited scripters - published several but non-trustable pictures and so on…

I don’t know if it’s still alive but just in-case: http://picassoemu.no-ip.info

Some of you may fined a lot of interesting information on the original forum - which to me - looks like a very nice episode of Murders in Midssomer .

Back to the story:
He had recruited a large amount of coders. At some point - it seems like they have all left and didn’t gave Picasso a chance. He began advertising his forum on Emupedia - what made many users angry. Put me on number one as the angriest.

At a later stage - he began picking abusing people on our IRC network. He then used Bloody’s Nickname… and then he began doing a sh*tload of mess.

His nick on the IRC was known to be as “User” or something of that kind.
The climax:

At the goddamn latest summer vacation - I had some time to search through some good forum-hacking sites. I studied this subject for few weeks until I became really tired of it :-\

At some eve during the vacation - I just exploited his forum - and then, by using simple tools I began shutting down his defenses and modifying them. Later that eve - (a “FEW” hours later) I had the right tools and the opportunity to hack his computer.
Once I did - I navigated from the hosting computer - all the way through his HOME-NETWORK until I found what I was searching. I RAR’d - Uploaded - Backed up, Removed traces - Removed Proxies - Removed ANY clue that will indicate who I really am. 10 Minutes later I went sleeping. And on the following day - I published it.

Obviously - The main coder - Pablo was idiot enough to think that if he will release the “real” sources on his site 10 minutes after I leaked his sources – It’ll turn him less “PWNT” ….

The MAIN POINT
- Few things all of us will never know:

What code is this emu really based on? (Some say WowwoW)
Was this emu based on “SOMETHING” at-all?
Who Pablo really is/was?

THIS WAY OR OTHER - RESPECT THE CREATOR AND THE CODER. EVEN IF HE DIDNT DO 100% OF THE WORK , HE OBVOIUSLY STILL DID SOMETHING.

ALL CREDITS GO TO PABLOPICASSO AND HIS TEAM.
ALL CREDITS FOR LEAKING GO TO - YOUR SERVANT - WARDEN.

Emulator info:
AS Pablo stated - this emu was 1 packet far of enter world
SHOULD support Burning Crusade and the Latest versions before it (12/11/10/9/8)
Written on C# (or C#.net i am NOT SURE)

http://filebeam.com/f50a1fd33eb4207c1c4100b3ba06fd96
Password: decompile


13 - WOWD

As you may remember WOWD, it was the old school emulator written in C++, being underground and then once again being leaked and then underground again. Famous and infamous emulator, being the main thing everyone aimed for, it was even the base for MaNGOS server and many others. Let’s look at it closely.

First time I’ve been introduced to WOWD was in the time when it was running on St0rmwow. I’ve been brought in by one nice guy who was kind of PR and motivator in the team and he has shown me what works and what are the advancements since last public leak. It was awesome, combat felt like playing on retail server and there were many working spells unlike at WOWemu which was lacking all those features and was stuck on low version while this was during the 1.12 patch (but please don’t quote me on that). Met a girl coder there, which was awesome cause in that time I believed that girls don’t exist on internet and there she was. Summed up, it was awesome piece of software far from MaNGOS and others, unluckily by that time I weren’t allowed to tell anyone what I’ve seen so I just hoped that sooner or later, every private server will have this software and people will join to one big community and be happy forever.

This chat took place at 5.6.2006 shortly before the 10 PM CET

shouji: NIVELOOOoooooooooooooooooooooooooo
Nivelo: yesss?
shouji: take note for the future years in your gotwow pdf
shouji: wowd supporing 50 useres !! hrs online !
Nivelo: hmmm, that’s nice
shouji: read some comments
shouji: This server is THE BOMB … BOOM
shouji: If you want a Fun Lag Free server you should come here …
shouji: This is like the real deal cuz it isnt CHEAP like all the other server that in like 10 min you can be level 255 …
shouji: Get in quick while the Gates of Heaven are still open!
shouji: this server is unbeliviable
Nivelo: oyy
shouji: how come i cant connect to the server…u guys probably fixing stuff…well good luck on it. I hope this king of server get done soon i cant wait for it to be finished
shouji: I have only been on this server for a couple of hours, but this server is exceptionally good for a 3 days old server. It has its bugs at the time being but in time it will grow to be a fantastic server!
shouji: Helpful gm’s and a very supportive community!
shouji: it says 1.10 OFFICIAL. it’s not 1.9.x. it would say 1.10 i guess but wowstatus doesnt have 1.10 >.>
shouji: use OFFICIAL not hack, it says OFFICAL.. dont ruin this server for everyone by connecting with hacked clients
shouji: This is a really good new started server, lets hope they keep it good ,one of the best servers i think
Nivelo: yah, you got some really good feedback as it seems
shouji: yeah
shouji: it feels official
shouji: just for some minor bugs
shouji: but we are fixing them
shouji: going to beat rivera soon
shouji: ;P
Nivelo: wishing you luck
shouji: http://www.wowstatus.net/detail.php?server=120481
shouji: just dont post it everywhere < .<
shouji: keepit private
Nivelo: i heard you got BGs working
shouji: yes but disabled ;P
Nivelo: hehe
shouji: testing new core
shouji: that rocks
Nivelo: completely new one?
shoujiyeah kind of
Nivelo: like no-more-TP?
shouji: ?
Nivelo: never mind
Nivelo: wowd is no more derivate as it looks
shouji: wowd is teampython
shouji: dont forget that ;P
Nivelo: i know, but is quite a long way from there
shouji: so in other terms wowd is wowpython ;P

As you might have seen, this never happened. From time to time developers boasted about their work and tried to present it while not releasing any more info. A year later I was invited to beta server by XmD, who was doing database works etc. (If you browsed the gallery, notice the picture where there is “Amelia invites you to join shit” this was it. If I recall correctly, this server was hosted by Power2All at mmorpg4free which was the central place who everyone connected to WOWD were spending their time. The main guy which it was all around was named Espire and emulator named after him EspireEmu. In fact WOWD got new developer who sooner left Pantera and worked shortly on Pandora server. His name was and still is Burlex, which was one of most skilled people around the scene in that time, not to mention he was spending hours and hours coding and fixing the server. Everything seemed pretty and future looked bright.

On a sunny day (I don’t really remember if it was really sunny, but it sounds nice, so let’s have a nice place to recall, shall we?) there has been a nice post from XmD depicting what happened and why has that happened and what’s going on, long story short, there you go:

[RELEASE] - WoWD(MMORPG4Free Emu) ENJOY!! [March Release] - Today, 12:19 AM

I guess now you guys know what a leaker is I wish you luck and I had a blast in WoWD. Too bad it had to come to this, I know ill get flamed but w/e eh. Go ahead and say w/e you want cuz I don’t care about anyone’s opinion. This will be the last time anyone is gonna see me in the scene.

O well I guess Im part of the evil ones now. WoWD project is a never ending project there will always be things to fix or things to add so I might as well release the crap I got since I already got the rep for being the “leaker” in march. I don’t care If I killed the project or not but remember that the source will always be opensource and eventually it will end up to the public sooner or later. They may announce they are FOREVER DEAD AND DOOMED but they will be working on it or passing it on to other people and if you cant believe that you are stupid, because WoWD has never died and never will.
Burlex thinks he owns the project since he rewrote the whole core but he forgot that without the knowledge and research and code other people had he would have never achieved what he has now. he would be still in his crappy Pandora project. Now go ahead and suck the balls of your king espire and flame me. Its sad!!! even P2A had to suck his balls to host wowd lawl. GG

I would like to thank some people who I had a lot of fun during the 3 year journey.
****** <3 I will always miss you!
****** <3
***** <3
********* <3
***** <3
***** <3
****** <3
****** <3
********

From this point, everything went down, there were massive flames on the both sides, community divided into two halves stating that it killed project or on the other hand helped to get finally something good out there. The only thing happened, that it was finally out of secrets and people finally saw what’s the famous WOWD. The leak was unluckily older than current version and database didn’t fit perfectly, so there was a wave of people offering fixes and converting other databases. WOWD started to live on its own. Burlex tried and partially succeeded by admitting it’s the proper server and later released the core under GPL license as Antrix.

Antrix incoming, watch out for flames!

Continuation of an undisclosed source.
Open-source, most likely QPL license.
More details will be posted soon.

Edit:
- Multi-threaded, partial cluster support finished.
- Async network code on all platforms (iocp on windows, epoll on linux and kqueue on freebsd)
- Stable core, crashes with under 700 players are extremely rare.
- Easily developable database.
- Powerful script system.

What is Antrix?
Antrix is a server package for World of Warcraft. It does NOT contain any data from Blizzard’s software, or any of their official servers content.

What is it written in?
Antrix is written completely in C++.

How does it perform?
The server has been tested with over 1000 clients without any flaws or missing a beat.

What is the database backend?
Antrix uses a MySQL or PostgreSQL backend. Support for Oracle is possible through polymorphism.

How is the server extendable?
The server is extendable through external binary scripts for extra AI, and world scripting.

Who makes this kickass product?
You don’t need to know. We perfer to stay anonymous. Do not post questions regarding the authors of this software.

Great, so how can I get a hold of this?
svn://emupedia.com/svn/antrix/
Binary releases are unsupported. USE AT YOUR OWN RISK, PEOPLE CAN PUT VIRUSES IN THEM EASILY. BUILD YOURSELF, YOU LAZY PEOPLE!

How can I help out?
You can either help out by posting detailed bug reports in the bug section of this forum, or by posting source code patches in the appropriate sections. These will be reviewed and added by developers manually. If you have contributed a lot of source code patches, we may consider you for svn access.

Where can I discuss matters regarding to this project?
The Emupedia IRC network. irc://emupedia.com/antrix, or Server: emupedia.com , Channel: #antrix

What advantages does this have over other servers?

* Server core fully accessable via high-performance scripts.
* Low memory usage.
* 100% multithreaded with asyncronous database access, so no time is spent blocking, and makes full use of today’s multi-core technology.
* Easily developable database via ingame commands.
* GM system based on flags, rather than command levels.
* High-performance network code on all platforms (FreeBSD, Linux, and Windows).
* Most game features working!
* Tried and tested code.
* Easy, non-confusing database structure.
* Want to know more? Try it for yourself.

The team does NOT support databases. We provide an empty database for you to work from, and that is all.

If you wanna advertise this, however we advise against it, please link directly to THIS THREAD. Give credit, ya bloody slackers.

The community on the other hand went its way and in particular the http://antrixproject.org angered Burlex most as it was stealing users and was the place where database from mmorpg4free was leaked. In that time, it was like da best database being available anywhere and anyhow. The leak was unluckily really badly timed, so it only caused more and more flaming. Few days later when there was nothing to be done about it, the Power2All decided to release the database as it was from his server. All the secret and privacy was gone, and for some time, it was good.

So that’s the way the database crumbles

[RELEASE] - Antrix 2.1.0 Official MMORPG4Free Database
This Database had been developed along with the Antrix on MMORPG4Free, this database is a result of hard work of all the MMO peopole
so in order to avoid some douchebag to take credits for our hard work, we decided to release it as it is now, we will not provide
any updates for it in the future, atleast at the moment we are not planning to. You are on you own from now on.

Credits:
Espire (writing sniffer, logging, fixing and creating its structure)
d1554573r (for changing the parsed data into this DB and fixing shitload of crap)
Power2All (for hosting everything as it is now)
Forte (instances sniffing)
Motive (the little bitch in our group)
Captnoord (for his parsers)

MMORPG gm’s Especially to DefaultUser for waypoints they’ve made.
Nerhzul (Skinningloot)
And rest of old wowd’s team

And our precious mmo players without their whining this db wouldnt be so good.

-=[ Thanks for flying with MMORPG4Free.com Airways ! ]=-

Extra Info:
Whoever leaked the Database, you’re a fucktard, and a shame for the community trying to gain fame by fucking over other people’s work, and I WILL find out who did it.

Download link:
http://www.mmorpg4free.com/MMORPG4Fr…se_(2.1.0).rar

He actually made that site to shutdown few times and at last, they achieved the peacefully solution so both sides were happy and started to kick some serious ass with the new emulator. In all this mess, the last thing which happened was that Antrix was finally established. There were forums set up for that and even the database team started up, at first it was OBDB, followed by OBDB2 and at last NCDB (with Walla in charge). The situation felt happily, but there were some fights between team members and Burlex being fed up by cleaning and fixing their code, so he decided to close up stable SVN branch and set up untested one where everyone could commit, and for some time it was good. Then the splitting of the forces became too imminent and developers being fed up left for good or for other projects.

In that time, the donations causes arisen, people were running Antrix and they accepted donations from their users, seems like an awesome idea, but at some extent, people used it to get shitloads of money for nothing, the servers which was in pure hate were wowscape and toxic-wow. One day Burlex was DDOSing WOWscape and another day, he was one hand with Peyton as he made a deal of hosting at their server. I’m not actually aware before or after Antrix’s rename, but it’s important to know this to understand the rest. So with all this donation crap going around, Burlex decided to re-release Antrix under new name: “Ascent”. XmD got back for a second and proudly announced that WOWD is getting a new name and new license (which was kind of problematic in the legal terms, but let’s not go into detail with it) which was… DRUMS PLEASE… AGPL3 (which is basically open source license with no derivative works allowed unless you got a yes from license holder and also can’t get money for use of the software if I understood it properly, feel free to correct me on that and also the code which was run on the server as binary has to be published, but no one obeyed that). The community was happy they got the code, but the things went downhill. Not only that donations stuff weren’t solved, also donations became popular and there were loads and loads servers accepting donations. Code being held up, and community warming up waiting to explode.

Small part in this war also fought rebel-wow, which claimed that they use it’s own server, which was found out to be renamed ascent and from that time, they were DDOSed and crashed very often.

As the things were going down, Burlex openly admitted that he is keeping code closed for use on wowscape, so others did the same to copy him and fight back by it. Everything was going smoothly, some fights between the people, some small flames, childish fights for scripts etc. By the way, if I start mentioning scripts, there has been a small dispute between NCDB and Moon++ (being the script development group for Ascent). In the time Moon++ existed, they stand up for themselves, later joined NCDB and even later parted it’s way with NCDB because of “not going to do as you say” things. So those two parted their ways and everything went smooth for a while. Finally, the day of new patch (2.4) came up. Burlex got it working at the very same day it was on retail, but tempted the rest of the community by not releasing it to the public. People started to flame him, but he didn’t care, he slowly updated his code to be pretty and sweet outside those flames. When he finally released it (which was 3 weeks after the patch) everyone loved him. The very next day, NCDB went underground because they felt unappreciated by Burlex, which started flame wars against them. Since the downhill of the community, there has been a major split. Burlex went to private with wowscape, Trelorn started Open Ascent (which btw died a month later), Spidey and some people around him started their own branch named AspireCore, and after some trouble and being attacked from almost everyone Hasbro managed to start his own version and called ArcEmu. On the behind of all that, compboy worked and most likely still works on DOTA Mod for Ascent. The most fortunate thing which happened lately is Andy working on good ol’ Ascent in old repo and he advances a big time. Thank you all!



14 - The Trinity project

The Trinity project was originally suggested in the UDB community (privately) because some devs were unsatisfied with the MaNGOS team being “slow at accepting patches that were deemed stable ages ago, and thus lacking proper support for DB devs”.

Originally, UDB wanted to support both MaNGOS and Trinity, but it was suggested by Brian that UDB should completely disband to form Trinity, as a way to “make the MaNGOS project die” as some sort of “revenge”. That was where UDB pretty much dropped the idea of supporting Trinity in any way. In the end, only 1-3 people from UDB actually joined in on the Trinity project. and MaNGOS and UDB lived on.

Two MaNGOS devs, Neo2003 and Derex joined Trinity, but after MaNGOS switched to Git, they left Trinity for MaNGOS, because one of Trinity’s original promises was to use Git — which it didn’t, in the end.

It was also suggested that ScriptDev2 join Trinity, but this was instantly refused. However, Seline, a honored member of UDB/SD2 partly helped the project.

Many of the people who joined the project were actually patch developers (not official devs) at MaNGOS (w12x, megamage, MeanMachine, SLG, others).

The project’s idea

The idea of the project was mostly 2 things:

Accept patches faster, for better functionality.
Unite core+DB+scripting.
Both ideas are still being uphold to this day.

The project basically ended up consisting of: TrinityCore+TrinityScript (http://www.trinitycore.org) and TrinityDB (or TrinityDatabase if you will) (http://www.trinitydatabase.org)

A fork of TrinityCore, TrinityCore2, is the WotLK-version of the core, which also merges changesets from MaNGOS. It’s led by megamage. w12x dropped his TrinityAlpha (WotLK) project and left Trinity when TC2 was created, as he didn’t like merging from MaNGOS.

New DB project: DivinityDB

Some database developers (Om3n, Kane/SilverFox and others (who weren’t part of TDB)) didn’t like the way TDB was going, so they started their own database project for TrinityCore2 called DivinityDB: http://www.divinitydb.org. Drama quickly arose in the Trinity community, and both ended up banned there, and DivinityDB was pretty much taboo’d at TC.

DivinityDB later decided to support InfinityCore instead (http://www.infinitycore.org).




15 - WCell

WCell (http://www.wcell.org)
Above the drama and apart from the fray, stands an emulator built from the ground up in C#. WCell started when WOWD was already 3 years in development, a significant hurdle to overcome. Developers have come and gone, but WCell has been worked on actively without interruptions.

The core development team consisted of mgX, Craigen and biceps (who dragged tobz in, kicking and screaming :) ). As time went by, IronMala came along, as did Ralek, who became an essential member of team. His work on dissassembling the WOW Client is nothing short of god-like. Later, Domi joined up and has been an indispensable project leader and prolific contributor. Others have joined forces in recent months as well, namely Meshok and fubeca. Mokrago developed an IRC addon for the project and Timmeh has been gracious enough to provide hosting.

Unfortunately, most of the people actively working on the project were pro coders, so they burned out, or were lost to the demands of real life with no time left to work on the project. WCell 0.5 was the last major release, then the project switched to continuous improvement without releasing minor revisions. It requires different knowledge from WOWD and it’s derivatives, given that it’s the newest of the open source emulators that’s been around for more than a few weeks. Version 0.5 was barely playable, with just the basics being implemented.

Since then, there has been a constant flow of WOW patches and changes making development work difficult. However, when WoW released Live v3.0, WCell was the first emulator to support 3.0 client connection and continuous improvements have been made by the development team to support many of the newest client features.

A major disaster befell the WCell team around the start of 2009, when catastrophic hardware failure at the hosting facility destroyed the team’s wiki and forums. This set back development as the site was restored from transaction logs and threw the WCell community into disarray. Despite all of this, it won’t be long now before WCell overtakes and surpasses the competition, with a major release planned in the not-too-distant future (as of June 2009).

One of the many advantages that WCell has is in its design. The clean codebase and customized tools makes code patching a breeze. One great tool, which has been largely overlooked by the community is the Packet Analyzer, which allows sniffed retail packet logs to be parsed to human readable form. With further community cooperation, all packets could be rapidly documented, but it’s currently left in hands of WCell developers. Another great feature of WCell is its Add-on system. Its modular nature allows third parties to plug in customizeable addons which are developed completely separately from the core code. The result of which is a 100% customizeable server.

WCell is utilizing NHibernate as its DB layer and with planned release of C# 4.0 it’s going to support many scripting languages. At the moment, it only supports .NET ones (C#, VB.NET, Managed C++). The only disadvantage is that it doesn’t work on Linux as of yet, but there are plans which include making it work with alternative implementation of .NET called Mono.

You can support the WCell by adding this userbar to your signature at forums you are using.

Source: https://web.archive.org/web/20100731004936/http://www.gotwow.ic.cz/
