



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "lHpayO9NB85ajcF5HMSLwqJSs94:1359741917224";
 
 
 var CS_env = {"loggedInUserEmail":"spookyhouseAdmin@gmail.com","profileUrl":"/u/116163957316704900813/","relativeBaseUrl":"","assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/6441139730022036690","projectHomeUrl":"/p/brainbugz","token":"lHpayO9NB85ajcF5HMSLwqJSs94:1359741917224","projectName":"brainbugz"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>pluginMain.cpp - 
 brainbugz -
 
 
 Behavioural Animation System for Maya Particles - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/6441139730022036690/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/6441139730022036690/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/6441139730022036690/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/6441139730022036690/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>spookyhouseAdmin@gmail.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/116163957316704900813/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/116163957316704900813/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=http%3A%2F%2Fcode.google.com%2Fp%2Fbrainbugz%2Fsource%2Fbrowse%2Ftrunk%2Fsource%2FpluginMain.cpp" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/brainbugz">
 <a href="/p/brainbugz/">
 
 <img src="http://www.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/brainbugz/"><span itemprop="name">brainbugz</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/brainbugz/"><span itemprop="description">Behavioural Animation System for Maya Particles</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/brainbugz/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/brainbugz/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/brainbugz/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/brainbugz/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/brainbugz/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/brainbugz/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/brainbugz/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/brainbugz/source/list">Changes</a></span> &nbsp;
 
 &nbsp;
 
 
 <form action="/p/brainbugz/source/search" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input type="text" maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/brainbugz/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/brainbugz/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/brainbugz/source/browse/trunk/source/">source</a><span class="sp">/&nbsp;</span>pluginMain.cpp</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/brainbugz/source/browse/trunk/source/pluginMain.cpp?edit=1"
 ><img src="http://www.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper"><b>r79</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn79_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn79_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn79_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn79_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn79_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn79_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn79_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn79_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn79_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn79_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn79_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn79_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn79_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn79_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn79_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn79_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn79_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn79_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn79_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn79_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn79_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn79_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn79_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn79_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn79_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn79_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn79_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn79_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn79_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn79_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn79_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn79_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn79_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn79_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn79_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn79_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn79_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn79_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn79_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn79_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn79_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn79_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn79_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn79_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn79_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn79_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn79_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn79_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn79_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn79_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn79_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn79_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn79_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn79_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn79_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn79_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn79_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn79_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn79_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn79_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn79_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn79_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn79_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn79_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn79_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn79_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn79_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn79_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn79_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn79_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn79_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn79_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn79_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn79_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn79_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn79_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn79_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn79_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn79_79"

><td id="79"><a href="#79">79</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint lang-cpp"><table id="src_table_0"><tr
id=sl_svn79_1

><td class="source">//<br></td></tr
><tr
id=sl_svn79_2

><td class="source">// Copyright (C) 2002 Carsten Kolve <br></td></tr
><tr
id=sl_svn79_3

><td class="source">// <br></td></tr
><tr
id=sl_svn79_4

><td class="source">// File: pluginMain.cpp<br></td></tr
><tr
id=sl_svn79_5

><td class="source">//<br></td></tr
><tr
id=sl_svn79_6

><td class="source">// Author: Maya SDK Wizard<br></td></tr
><tr
id=sl_svn79_7

><td class="source">//<br></td></tr
><tr
id=sl_svn79_8

><td class="source"><br></td></tr
><tr
id=sl_svn79_9

><td class="source">#include &lt;maya/MFnPlugin.h&gt;<br></td></tr
><tr
id=sl_svn79_10

><td class="source"><br></td></tr
><tr
id=sl_svn79_11

><td class="source">#include &lt;bbCombineDesiresNode.h&gt;<br></td></tr
><tr
id=sl_svn79_12

><td class="source">#include &lt;bbSteeringDesireNode.h&gt;<br></td></tr
><tr
id=sl_svn79_13

><td class="source">#include &lt;maya/MPxNode.h&gt;<br></td></tr
><tr
id=sl_svn79_14

><td class="source">// #include &lt;maya/MPxFieldNode.h&gt;<br></td></tr
><tr
id=sl_svn79_15

><td class="source"><br></td></tr
><tr
id=sl_svn79_16

><td class="source">MStatus initializePlugin( MObject obj )<br></td></tr
><tr
id=sl_svn79_17

><td class="source"><br></td></tr
><tr
id=sl_svn79_18

><td class="source">{ <br></td></tr
><tr
id=sl_svn79_19

><td class="source">	MStatus   status;<br></td></tr
><tr
id=sl_svn79_20

><td class="source">	MFnPlugin plugin( obj, &quot;Carsten Kolve&quot;, &quot;4.0&quot;, &quot;Any&quot;);<br></td></tr
><tr
id=sl_svn79_21

><td class="source"><br></td></tr
><tr
id=sl_svn79_22

><td class="source">	// register steering desire node<br></td></tr
><tr
id=sl_svn79_23

><td class="source">	status = plugin.registerNode( &quot;bbSteeringDesire&quot;, <br></td></tr
><tr
id=sl_svn79_24

><td class="source">								  bbSteeringDesire::id, <br></td></tr
><tr
id=sl_svn79_25

><td class="source">								  &amp;bbSteeringDesire::creator,<br></td></tr
><tr
id=sl_svn79_26

><td class="source">								  &amp;bbSteeringDesire::initialize,<br></td></tr
><tr
id=sl_svn79_27

><td class="source">								  MPxNode::kFieldNode );<br></td></tr
><tr
id=sl_svn79_28

><td class="source">	if (!status) <br></td></tr
><tr
id=sl_svn79_29

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_30

><td class="source">		status.perror(&quot;registerNodeBBSD&quot;);<br></td></tr
><tr
id=sl_svn79_31

><td class="source">		return status;<br></td></tr
><tr
id=sl_svn79_32

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_33

><td class="source"><br></td></tr
><tr
id=sl_svn79_34

><td class="source">	// register combine desires node<br></td></tr
><tr
id=sl_svn79_35

><td class="source">	status = plugin.registerNode( &quot;bbCombineDesires&quot;, <br></td></tr
><tr
id=sl_svn79_36

><td class="source">								  bbCombineDesires::id, <br></td></tr
><tr
id=sl_svn79_37

><td class="source">								  bbCombineDesires::creator,<br></td></tr
><tr
id=sl_svn79_38

><td class="source">								  bbCombineDesires::initialize );<br></td></tr
><tr
id=sl_svn79_39

><td class="source"><br></td></tr
><tr
id=sl_svn79_40

><td class="source">	if (!status) <br></td></tr
><tr
id=sl_svn79_41

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_42

><td class="source">		status.perror(&quot;registerNodeBBCD&quot;);<br></td></tr
><tr
id=sl_svn79_43

><td class="source">		return status;<br></td></tr
><tr
id=sl_svn79_44

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_45

><td class="source"><br></td></tr
><tr
id=sl_svn79_46

><td class="source">	// register ui<br></td></tr
><tr
id=sl_svn79_47

><td class="source"><br></td></tr
><tr
id=sl_svn79_48

><td class="source">    status = plugin.registerUI(&quot;bbCreateUI&quot;, &quot;bbDeleteUI&quot;);<br></td></tr
><tr
id=sl_svn79_49

><td class="source">    if (!status) {<br></td></tr
><tr
id=sl_svn79_50

><td class="source">        status.perror(&quot;registerUIScripts&quot;);<br></td></tr
><tr
id=sl_svn79_51

><td class="source">        return status;<br></td></tr
><tr
id=sl_svn79_52

><td class="source">    }<br></td></tr
><tr
id=sl_svn79_53

><td class="source"><br></td></tr
><tr
id=sl_svn79_54

><td class="source"><br></td></tr
><tr
id=sl_svn79_55

><td class="source">	return status;<br></td></tr
><tr
id=sl_svn79_56

><td class="source">}<br></td></tr
><tr
id=sl_svn79_57

><td class="source"><br></td></tr
><tr
id=sl_svn79_58

><td class="source">MStatus uninitializePlugin( MObject obj )<br></td></tr
><tr
id=sl_svn79_59

><td class="source"><br></td></tr
><tr
id=sl_svn79_60

><td class="source">{<br></td></tr
><tr
id=sl_svn79_61

><td class="source">	MStatus   status;<br></td></tr
><tr
id=sl_svn79_62

><td class="source">	MFnPlugin plugin( obj );<br></td></tr
><tr
id=sl_svn79_63

><td class="source"><br></td></tr
><tr
id=sl_svn79_64

><td class="source">	status = plugin.deregisterNode( bbCombineDesires::id );<br></td></tr
><tr
id=sl_svn79_65

><td class="source">	if (!status) {<br></td></tr
><tr
id=sl_svn79_66

><td class="source">		status.perror(&quot;deregisterNodeBBCD&quot;);<br></td></tr
><tr
id=sl_svn79_67

><td class="source">		return status;<br></td></tr
><tr
id=sl_svn79_68

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_69

><td class="source"><br></td></tr
><tr
id=sl_svn79_70

><td class="source">	status = plugin.deregisterNode( bbSteeringDesire::id );<br></td></tr
><tr
id=sl_svn79_71

><td class="source">	<br></td></tr
><tr
id=sl_svn79_72

><td class="source">	if (!status) <br></td></tr
><tr
id=sl_svn79_73

><td class="source">	{<br></td></tr
><tr
id=sl_svn79_74

><td class="source">		status.perror(&quot;deregisterNodeBBSD&quot;);<br></td></tr
><tr
id=sl_svn79_75

><td class="source">		return status;<br></td></tr
><tr
id=sl_svn79_76

><td class="source">	}<br></td></tr
><tr
id=sl_svn79_77

><td class="source">	<br></td></tr
><tr
id=sl_svn79_78

><td class="source">	return status;<br></td></tr
><tr
id=sl_svn79_79

><td class="source">}<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn79_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn79_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/brainbugz/source/detail?spec=svn79&amp;r=2">r2</a>
 by carsten.kolve
 on Nov 5, 2006
 &nbsp; <a href="/p/brainbugz/source/diff?spec=svn79&r=2&amp;format=side&amp;path=/trunk/source/pluginMain.cpp&amp;old_path=/trunk/source/pluginMain.cpp&amp;old=">Diff</a>
 </div>
 <pre>initial upload to svn</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/brainbugz/source/detail?r=2&spec=svn79';
 var publish_url = '/p/brainbugz/source/detail?r=2&spec=svn79#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/.project');
 changed_urls.push('/p/brainbugz/source/browse/trunk/.project?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_about.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_about.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_bugstructure.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_bugstructure.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_clamp.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_clamp.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_combine.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_combine.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_connect.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_connect.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_generalBugAttr.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_generalBugAttr.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_installation.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_installation.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_issues.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_issues.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_sd_bug.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_sd_bug.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_sd_neighbor.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_sd_neighbor.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_sd_target.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_sd_target.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_setup.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_setup.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_steering.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_steering.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_toc.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_toc.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_tutorial.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_tutorial.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/bb_whatis.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/bb_whatis.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/brainbugz.htm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/brainbugz.htm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/AEbbCombineDesires.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/AEbbCombineDesires.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bbcf.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bbcf.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bbsd.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bbsd.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bug1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bug1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bug2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bug2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bugstruc.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bugstruc.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bugstructure.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bugstructure.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/bugz.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/bugz.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/cdAE.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/cdAE.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/generalBugAttr.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/generalBugAttr.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/hg_1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/hg_1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/hg_2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/hg_2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/hg_3.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/hg_3.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/hg_4.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/hg_4.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/logo_bug.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/logo_bug.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdBugHeadAE.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdBugHeadAE.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdBugWanderAE.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdBugWanderAE.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdNeighborAlign.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdNeighborAlign.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdNeighborCohesion.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdNeighborCohesion.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdNeighborSeparation.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdNeighborSeparation.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sdTargetAE.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sdTargetAE.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_BugHead.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_BugHead.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_CurveFollowing.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_CurveFollowing.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_cSeek.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_cSeek.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_keepDistance.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_keepDistance.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_obstacleAvoidance.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_obstacleAvoidance.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_pArrival.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_pArrival.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_pMothSeek.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_pMothSeek.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_pSeek.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_pSeek.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_pursuit.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_pursuit.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_shadow.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_shadow.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/sd_wander.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/sd_wander.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/selectConnEdit.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/selectConnEdit.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_CompEdit.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_CompEdit.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit3.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit3.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit4.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit4.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit5.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit5.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_ConnEdit6.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit6.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_NodeRename.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_NodeRename.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeCD1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeCD1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeCD2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeCD2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aePa1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aePa1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeSD1.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD1.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeSD2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_aeSD3.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD3.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_bbMenu.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_bbMenu.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_bbMenu2.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_bbMenu2.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_pathWorkArea.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_pathWorkArea.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/docs/images/tut_prepWorkArea.gif');
 changed_urls.push('/p/brainbugz/source/browse/trunk/docs/images/tut_prepWorkArea.gif?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples/bbCurve.mb');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples/bbCurve.mb?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples/bbObstacleFlock.mb');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples/bbObstacleFlock.mb?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples/bbSwarm.mb');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples/bbSwarm.mb?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/examples/bbTutorial.mb');
 changed_urls.push('/p/brainbugz/source/browse/trunk/examples/bbTutorial.mb?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/BBCEA1.XPM');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/BBCEA1.XPM?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/BBCEA2.XPM');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/BBCEA2.XPM?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/BBCEA3.XPM');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/BBCEA3.XPM?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/bbCombineDesires.fti');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/bbCombineDesires.fti?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/bbSteeringDesire.fti');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/bbSteeringDesire.fti?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/out_bbCombineDesires.xpm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/out_bbCombineDesires.xpm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/icons/out_bbSteeringDesire.xpm');
 changed_urls.push('/p/brainbugz/source/browse/trunk/icons/out_bbSteeringDesire.xpm?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/AEbbCombineDesiresTemplate.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/AEbbCombineDesiresTemplate.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/AEbbConnectionEditor.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/AEbbConnectionEditor.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/AEbbSteeringDesireTemplate.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/AEbbSteeringDesireTemplate.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/bbCreateUI.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/bbCreateUI.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/mel/bbDeleteUI.mel');
 changed_urls.push('/p/brainbugz/source/browse/trunk/mel/bbDeleteUI.mel?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/MTools.h');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/MTools.h?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/bbCombineDesires.cpp');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbCombineDesires.cpp?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/bbCombineDesiresNode.h');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbCombineDesiresNode.h?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/bbSteeringDesireNode.cpp');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.cpp?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/bbSteeringDesireNode.h');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.h?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/brainbugz.dsp');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/brainbugz.dsp?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/brainbugz.plg');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/brainbugz.plg?r\x3d2\x26spec\x3dsvn79');
 
 
 changed_paths.push('/trunk/source/pluginMain.cpp');
 changed_urls.push('/p/brainbugz/source/browse/trunk/source/pluginMain.cpp?r\x3d2\x26spec\x3dsvn79');
 
 var selected_path = '/trunk/source/pluginMain.cpp';
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/brainbugz/source/browse/trunk/.project?r=2&amp;spec=svn79"
 
 >/trunk/.project</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs?r=2&amp;spec=svn79"
 
 >/trunk/docs</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_about.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_about.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_bugstructure.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_bugstructure.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_clamp.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_clamp.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_combine.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_combine.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_connect.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_connect.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_generalBugAttr.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_generalBugAttr.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_installation.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_installation.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_issues.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_issues.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_sd_bug.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_sd_bug.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_sd_neighbor.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_sd_neighbor.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_sd_target.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_sd_target.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_setup.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_setup.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_steering.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_steering.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_toc.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_toc.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_tutorial.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_tutorial.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/bb_whatis.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/bb_whatis.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/brainbugz.htm?r=2&amp;spec=svn79"
 
 >/trunk/docs/brainbugz.htm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images?r=2&amp;spec=svn79"
 
 >/trunk/docs/images</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/AEbbCombineDesires.gif?r=2&amp;spec=svn79"
 
 >...cs/images/AEbbCombineDesires.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bbcf.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bbcf.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bbsd.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bbsd.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bug1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bug1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bug2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bug2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bugstruc.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bugstruc.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bugstructure.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bugstructure.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/bugz.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/bugz.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/cdAE.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/cdAE.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/generalBugAttr.gif?r=2&amp;spec=svn79"
 
 >...k/docs/images/generalBugAttr.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/hg_1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/hg_1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/hg_2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/hg_2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/hg_3.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/hg_3.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/hg_4.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/hg_4.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/logo_bug.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/logo_bug.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdBugHeadAE.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sdBugHeadAE.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdBugWanderAE.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/sdBugWanderAE.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdNeighborAlign.gif?r=2&amp;spec=svn79"
 
 >.../docs/images/sdNeighborAlign.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdNeighborCohesion.gif?r=2&amp;spec=svn79"
 
 >...cs/images/sdNeighborCohesion.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdNeighborSeparation.gif?r=2&amp;spec=svn79"
 
 >.../images/sdNeighborSeparation.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sdTargetAE.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sdTargetAE.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_BugHead.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_BugHead.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_CurveFollowing.gif?r=2&amp;spec=svn79"
 
 >...ocs/images/sd_CurveFollowing.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_cSeek.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_cSeek.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_keepDistance.gif?r=2&amp;spec=svn79"
 
 >.../docs/images/sd_keepDistance.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_obstacleAvoidance.gif?r=2&amp;spec=svn79"
 
 >.../images/sd_obstacleAvoidance.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_pArrival.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_pArrival.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_pMothSeek.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_pMothSeek.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_pSeek.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_pSeek.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_pursuit.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_pursuit.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_shadow.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_shadow.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/sd_wander.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/sd_wander.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/selectConnEdit.gif?r=2&amp;spec=svn79"
 
 >...k/docs/images/selectConnEdit.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_CompEdit.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_CompEdit.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_ConnEdit.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit2.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit3.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit3.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit4.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit4.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit5.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit5.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_ConnEdit6.gif?r=2&amp;spec=svn79"
 
 >...nk/docs/images/tut_ConnEdit6.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_NodeRename.gif?r=2&amp;spec=svn79"
 
 >...k/docs/images/tut_NodeRename.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeCD1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeCD1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeCD2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeCD2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aePa1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aePa1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD1.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeSD1.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeSD2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_aeSD3.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_aeSD3.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_bbMenu.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_bbMenu.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_bbMenu2.gif?r=2&amp;spec=svn79"
 
 >/trunk/docs/images/tut_bbMenu2.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_pathWorkArea.gif?r=2&amp;spec=svn79"
 
 >...docs/images/tut_pathWorkArea.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/docs/images/tut_prepWorkArea.gif?r=2&amp;spec=svn79"
 
 >...docs/images/tut_prepWorkArea.gif</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples?r=2&amp;spec=svn79"
 
 >/trunk/examples</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples/bbCurve.mb?r=2&amp;spec=svn79"
 
 >/trunk/examples/bbCurve.mb</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples/bbObstacleFlock.mb?r=2&amp;spec=svn79"
 
 >/trunk/examples/bbObstacleFlock.mb</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples/bbSwarm.mb?r=2&amp;spec=svn79"
 
 >/trunk/examples/bbSwarm.mb</option>
 
 <option value="/p/brainbugz/source/browse/trunk/examples/bbTutorial.mb?r=2&amp;spec=svn79"
 
 >/trunk/examples/bbTutorial.mb</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons?r=2&amp;spec=svn79"
 
 >/trunk/icons</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/BBCEA1.XPM?r=2&amp;spec=svn79"
 
 >/trunk/icons/BBCEA1.XPM</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/BBCEA2.XPM?r=2&amp;spec=svn79"
 
 >/trunk/icons/BBCEA2.XPM</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/BBCEA3.XPM?r=2&amp;spec=svn79"
 
 >/trunk/icons/BBCEA3.XPM</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/bbCombineDesires.fti?r=2&amp;spec=svn79"
 
 >/trunk/icons/bbCombineDesires.fti</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/bbSteeringDesire.fti?r=2&amp;spec=svn79"
 
 >/trunk/icons/bbSteeringDesire.fti</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/out_bbCombineDesires.xpm?r=2&amp;spec=svn79"
 
 >...k/icons/out_bbCombineDesires.xpm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/icons/out_bbSteeringDesire.xpm?r=2&amp;spec=svn79"
 
 >...k/icons/out_bbSteeringDesire.xpm</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel?r=2&amp;spec=svn79"
 
 >/trunk/mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/AEbbCombineDesiresTemplate.mel?r=2&amp;spec=svn79"
 
 >...l/AEbbCombineDesiresTemplate.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/AEbbConnectionEditor.mel?r=2&amp;spec=svn79"
 
 >/trunk/mel/AEbbConnectionEditor.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/AEbbSteeringDesireTemplate.mel?r=2&amp;spec=svn79"
 
 >...l/AEbbSteeringDesireTemplate.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/bbCreateUI.mel?r=2&amp;spec=svn79"
 
 >/trunk/mel/bbCreateUI.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/mel/bbDeleteUI.mel?r=2&amp;spec=svn79"
 
 >/trunk/mel/bbDeleteUI.mel</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source?r=2&amp;spec=svn79"
 
 >/trunk/source</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/MTools.h?r=2&amp;spec=svn79"
 
 >/trunk/source/MTools.h</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbCombineDesires.cpp?r=2&amp;spec=svn79"
 
 >/trunk/source/bbCombineDesires.cpp</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbCombineDesiresNode.h?r=2&amp;spec=svn79"
 
 >...nk/source/bbCombineDesiresNode.h</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.cpp?r=2&amp;spec=svn79"
 
 >.../source/bbSteeringDesireNode.cpp</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/bbSteeringDesireNode.h?r=2&amp;spec=svn79"
 
 >...nk/source/bbSteeringDesireNode.h</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/brainbugz.dsp?r=2&amp;spec=svn79"
 
 >/trunk/source/brainbugz.dsp</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/brainbugz.plg?r=2&amp;spec=svn79"
 
 >/trunk/source/brainbugz.plg</option>
 
 <option value="/p/brainbugz/source/browse/trunk/source/pluginMain.cpp?r=2&amp;spec=svn79"
 selected="selected"
 >/trunk/source/pluginMain.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 <a href="/p/brainbugz/source/list?path=/trunk/source/pluginMain.cpp&start=2">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 1611 bytes,
 79 lines</div>
 
 <div><a href="//brainbugz.googlecode.com/svn/trunk/source/pluginMain.cpp">View raw file</a></div>
 </div>
 
 <div id="props">
 <p>File properties</p>
 <dl>
 
 <dt>svn:executable</dt>
 <dd>*</dd>
 
 </dl>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn79': '/trunk/source/pluginMain.cpp'}
 codereviews = CR_controller.setup(
 {"loggedInUserEmail":"spookyhouseAdmin@gmail.com","profileUrl":"/u/116163957316704900813/","relativeBaseUrl":"","assetHostPath":"http://www.gstatic.com/codesite/ph","domainName":null,"assetVersionPath":"http://www.gstatic.com/codesite/ph/6441139730022036690","projectHomeUrl":"/p/brainbugz","token":"lHpayO9NB85ajcF5HMSLwqJSs94:1359741917224","projectName":"brainbugz"}, '', 'svn79', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/6441139730022036690/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>

